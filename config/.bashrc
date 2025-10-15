# upon terminal opening

# upon initializing a terminal
echo ""
echo "Time:	$(date +'%H:%M')"
echo "Date:	$(date +'%d-%b-%Y')"
printf "\n"

# command history
HISTFILESIZE=5000  # Maximum number of lines
HISTSIZE=10000      # Number of commands to remember

# Current Project
alias cdintra='cd ~/sgoinfre/github/philosophers-gab && ls && pwd && git pull'

# aliases for git
alias gitlog='git log --pretty=format:"%h | %ad -> %s" --date=format:'%d-%b' | nl'
alias branches='git log --log --decorate --oneline'

# 42 Madrid Standard Information
export USER=gomandam
export MAIL=gomandam@student.42madrid

# System Cleaning
alias xclean="/bin/bash $HOME/xcleaner/xclean.sh"
