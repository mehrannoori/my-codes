#!/usr/bash
serverdir="mehran@127.0.0.1:/home/mehrannoori/";
foldername="${PWD##*/}";
path=$serverdir$foldername
#echo $path
scp -r ./ $path
