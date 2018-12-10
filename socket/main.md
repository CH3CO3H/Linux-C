# SOCKET

```c
#include <sys/socket.h>
int socket(int domain, int type, int protocol);
int bind(int sockfd, const struct sockaddr* addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int accept(int sockfd, struct sockaddr* addr, socklen_t* addrlen);
int connect(int sockfd, const struct sockaddr* addr, socklen_t addrlen);
int socketpair(int domain, int type, int protocol, int sv[2]);

ssize_t send(int sockfd, const void* buf, size_t len, int flags);
ssize_t sendto(int sockfd, const void* buf, size_t len, int flags, const struct sockaddr* destaddr, socklen_t addrlen);
ssize_t sendmsg(int sockfd, const struct msghdr* msg, int flags);
ssize_t recv(int sockfd, void* buf, size_t len, int flags);
ssize_t recvfrom(int sockfd, void* buf, size_t len, int flags, struct sockaddr* src_addr, socklen_t* addrlen);
ssize_t recvmsg(int sockfd, struct msghdr* msg, int flags);

#include <poll.h>
int poll(struct pollfd* fds, nfds_t nfds, int timeout);

#include <sys/select.h>
int select(int nfds, fd_set* readfds, fd_set* writefds, fd_set* execeptfds, struct timeval* timeout);
write
writev
sendfile
read
readv

getsockname
getpeername
getsockopt
setsockopt
ioctl
close
shutdown

fcntl
```

<u>domain</u>:

| Name              | Purpose                      | Man page |
| ----------------- | ---------------------------- | -------- |
| AF_UNIX, AF_LOCAL | Local communication          | unix(7)  |
| AF_INET           | IPv4 Internet protocols      | ip(7)    |
| AF_INET6          | IPv6 Internet protocols      |          |
| AF_IPX            | IPX - Novell protocols       |          |
| AF_NETLINK        | Kernel user interface device |          |
| AF_X25            |                              |          |
| AF_AX25           |                              |          |
| AF_ATMPVC         |                              |          |
| AF_APPLETALK      |                              |          |
| AF_PACKET         |                              |          |
| AF_ALG            |                              |          |

<u>type</u>:

| Name           | protocol |
| -------------- | -------- |
| SOCK_STREAM    | TCP      |
| SOCK_DGRAM     | UDP      |
| SOCK_SEQPACKET |          |
| SOCK_RAW       |          |
| SOCK_RDM       |          |

bitwise OR of any of the following values:

| Name          | memo       |
| ------------- | ---------- |
| SOCK_NONBLOCK | O_NONBLOCK |
| SOCK_CLOEXEC  | O_CLOEXEC  |

<u>protocol</u>:

0 \(for now)

<u>flags</u> in recvs func(formd by ORing):

| Name                             | memo |
| -------------------------------- | ---- |
| MSG_CMSG_CLOEXEC(recvmsg() only) |      |
| MSG_DONTWAIT                     |      |
| MSG_ERRQUEUE                     |      |
| MSG_OOB                          |      |
| MSG_PEEK                         |      |
| MSG_TRUNC                        |      |
| MSG_WAITALL                      |      |

<u>msg</u>:

```c
struct iovec {
    void* iov_base;
    size_t iov_len;
};
struct msghdr {
    void* msg_name;
    socklen_t msg_namelen;
    struct iovec* msg_iov;
    size_t msg_iovlen;
    void* msg_control;
    size_t msg_controllen;
    int msg_flags;
};
```

<u>msg_flags</u>:

| Name         | memo |
| ------------ | ---- |
| MSG_EOR      |      |
| MSG_TRUNC    |      |
| MSG_OOB      |      |
| MSG_ERRQUEUE |      |

<u>fds</u>:

```c
struct pollfd {
    int fd;
    short events;
    short revents;
};
```



**Socket options**:

| Name                                               | Expects          |
| -------------------------------------------------- | ---------------- |
| SO_ACCEPTCONN                                      | 0 OR 1           |
| SO_ATTACH_FILTER, SO_ATTACH_BPF (since Linux 3.19) |                  |
| SO_ATTACH_REUSEPORT_CBPF, SO_ATTACH_REUSEPORT_EBPF |                  |
| SO_BINDTODEVICE                                    |                  |
| SO_BROADCAST                                       |                  |
| SO_BSDCOMPAT                                       |                  |
| SO_DEBUG                                           |                  |
| SO_DETACH_FILTER, SO_DETACH_BPF                    |                  |
| SO_DOMAIN                                          |                  |
| SO_ERROR                                           |                  |
| SO_DONTROUTE                                       |                  |
| SO_INCOMING_CPU                                    |                  |
| SO_KEEPALIVE                                       | integer boolean  |
| SO_LINGER                                          | linger structure |
| SO_LOCKFILTER                                      |                  |
| SO_MARK                                            |                  |
| SO_OOBINLINE                                       |                  |
| SO_PASSCRED                                        |                  |
| SO_PEEK_OFF                                        |                  |
| SO_PEERCRED                                        |                  |
| SO_PRIORITY                                        |                  |
| SO_PROTOCOL                                        |                  |
| SO_RCVBUF                                          | [256, ...)       |
| SO_RCVBUFFORCE                                     |                  |
| SO_RCVLOWAT, SO_SNDLOWAT                           |                  |
| SO_RCVTIMEO, SO_SNDTIMEO                           |                  |
| SO_REUSEADDR                                       |                  |
| SO_REUSEPORT                                       |                  |
| SO_RXQOVFL                                         |                  |
| SO_SNDBUF                                          |                  |
| SO_SNDBUFFORCE                                     |                  |
| SO_TIMESTAMP                                       |                  |
| SO_TYPE                                            |                  |
| SO_BUSY_POLL                                       |                  |

