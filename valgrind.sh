# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    valgrind.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 16:06:46 by tkomeno           #+#    #+#              #
#    Updated: 2022/05/06 16:54:49 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

docker-compose up -d --build valgrind &> /dev/null
docker run --rm printf_valgrind:latest
docker-compose rm -f &> /dev/null
