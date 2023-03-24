# ============================================================================ #
# Colors
_END		= \033[0m
_COMP		= \033[36m
_BUILD		= \033[35m
_REMOVE		= \033[1;31m

# Messages
COMP		= Compiling
BUILD		= Building
REMOVE		= Removing
MSG_COMP	= ${_COMP}${COMP}:	${_END}
MSG_BUILD	= ${_BUILD}${BUILD}: 	${_END}
MSG_RMV		= ${_REMOVE}${REMOVE}:	${_END}

ASCII		=\n   ___ ___ ___ \n  / __| _ \ _ \ \n | (__|  _/  _/\n  \___|_| |_|  \n

# ============================================================================ #

# Paths
#SRCS_PATH	= srcs/
SRCS_PATH	= ./
#INCS_PATH	= incs/
INCS_PATH	= ./
#INCS_SUBDIR	= 
#INCS_PATH	+= $(addprefix incs/, $(INCS_SUBDIR))
OBJS_PATH	= objs/

# Names and files
NAME		= btc
FILES		= main.cpp \
		  BitcoinExchange.cpp \
#F_SUBDIR	= 
#FILES		+= $(addprefix ???/, $(F_SUBDIR))

OBJS		= $(addprefix $(OBJS_PATH), $(FILES:.cpp=.o))
DEP			= $(OBJS:.o=.d)

# Flags + compilation
INCS		= $(addprefix -I, $(INCS_PATH))
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98 -MMD
CXX 		= c++

# Optional flags
# CXXFLAGS 	+= -O3
CXXFLAGS 	+= -g3
# CXXFLAGS	+= -fsanitize=address

# Object making rule
$(OBJS_PATH)%.o: $(SRCS_PATH)%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS) 
	@echo "${MSG_COMP}$<"

# Compiling command
all: ${NAME}


${NAME}: ${OBJS}
	@echo "\033[34m${ASCII}\033[0m"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "${MSG_BUILD}${NAME}${MSG_FINISH}"

-include $(DEP)

# Other rules
clean:
ifneq (,$(wildcard ${OBJS_PATH}))
	@rm -rf ${OBJS_PATH}
	@echo "${MSG_RMV}${OBJS_PATH}"
endif

fclean: clean
ifneq (,$(wildcard ${NAME}))
	@rm -f ${NAME}
	@echo "${MSG_RMV}${NAME}"
endif

re:
	@make fclean -s
	@make all -s

run: re
	@echo -n "\033[1;34m \nRun ->> \033[0m"
	./btc file.txt

.PHONY: all clean fclean re run
