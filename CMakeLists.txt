INCLUDE_DIRECTORIES(/usr/include/mysql)
ADD_EXECUTABLE(main main.c)
TARGET_LINK_LIBRARIES(main mysqlclient)
