# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 07:55:33 by tkomeno           #+#    #+#              #
#    Updated: 2022/05/06 15:25:48 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM gcc:latest

COPY . /ft_printf

WORKDIR /ft_printf

RUN make compile

CMD [ "./main" ]
