# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 07:55:33 by tkomeno           #+#    #+#              #
#    Updated: 2022/05/06 15:26:08 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM gcc:latest

RUN apt-get update

RUN apt-get upgrade -y

RUN apt-get install valgrind -y

COPY . /ft_printf

WORKDIR /ft_printf

RUN make compile

CMD [ "valgrind", "./main" ]
