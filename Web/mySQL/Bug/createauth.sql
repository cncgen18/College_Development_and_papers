
create table authorised_users ( name varchar(20), 
                                password varchar(40),
                                        primary key     (name)
                              );
insert into authorised_users values ( 'username', 
                                      'password' );

insert into authorised_users values ( 'testuser', 
                                      sha1('password') );
