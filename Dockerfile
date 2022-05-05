# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 07:55:33 by tkomeno           #+#    #+#              #
#    Updated: 2022/05/05 09:14:12 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM gcc:latest

COPY . /usr/src/ft_printf

WORKDIR /usr/src/ft_printf

RUN make compile

CMD [ "./main" ]
