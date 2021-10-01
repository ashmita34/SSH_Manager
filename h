#!/usr/bin/python2.7
import os
import sys

host_list = [
    servername1,
    servername2
]

if len(sys.argv) == 2 and len(sys.argv[1]) > 2:
    filtered_list = [ host+'.hosts.web.com.au' for host in host_list if sys.argv[1] in host ]
    if filtered_list:
        for i in range(len(filtered_list)):
            print('   [%s] %s' % (i+1, filtered_list[i]))

        try:
            input = int(raw_input('\n   Select: '))

            if input > 0 and input <= len(filtered_list):
                os.system('ssh -l ubuntu ' + filtered_list[input-1])
        except:
            pass

