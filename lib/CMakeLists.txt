  add_library(lib configHandler.cpp
                  mberech.cpp
                  mlstjahr.cpp
                  mosonst.cpp
                  mpara.cpp
                  mre4.cpp
                  mre4abz.cpp
                  mre4alte.cpp
                  mre4jl.cpp
                  mre4sonst.cpp
                  msolz.cpp
                  msolzsts.cpp
                  msonst.cpp
                  mst5-6.cpp
                  mvmt.cpp
                  mvsp.cpp
                  mztabfb.cpp
                  up5-6.cpp
                  upanteil.cpp
                  upevp.cpp
                  uplstlzz.cpp
                  upmlst.cpp
                  uptab21.cpp
                  upvkv.cpp
                  upvkvlzz.cpp
                  functional_helper.cpp)

configure_file(config.csv config.csv COPYONLY)

