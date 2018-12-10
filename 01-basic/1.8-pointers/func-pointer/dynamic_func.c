typedef int logger_function(char const*, ...);
extern logger_function* logger;
enum logs { log_pri, log_ign, log_ver, log_num };

extern int logger_verbose(char const*, ...);
static int logger_ignore(char const*, ...) {
	return 0;
}
logger_function* logger=logger_ignore;
static logger_function* loggers={
	[log_pri]=printf,
	[log_ign]=logger_ignore,
	[log_ver]=logger_verbose,
};

