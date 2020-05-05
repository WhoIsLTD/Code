#Small Data - File
#Big and confidential - DB
#Very Big and confidental - Big DB...
#Data in programming and storing in a file permannet.
#File ---> Character textual information.
#Binary Format --> Image, Videos and Zip etc.

#In-Build function in read, write, mode
#f= open("Sample2.txt",'x')
#print(f.name)
#print("closed or not",f.closed)
#print("closed or not",f.closed)
#print("read", f.readable())
#print("write",f.writable())
#f.close()

# Different modes and when and how to use them
# r,w,r+,w+,a,a+,x  -> Text ; rb,wb,r+b,w+b,ab,a+,xb -> Binary
# Filenotfounderror -> R .. Read is a default. Write -> Overwrite. A-> Append X -

#Write, read,read(n), Readlines
#f=open("sample.txt",'w')
#f.write("Hi all \nGood morning")
#fid =f.fileno()
#print("Fileno", fid)
#f.close()
#f = open("sample.txt", 'r')
#str= f.read()
#print(str)
#f.close()

#File position, rename and deltion of file.
# file.close() -Close the file. A closed file cannot be read or written any more.
# file.flush() -Flush the internal buffer, like stdio's fflush. This may be a no-op on some file-like objects.
# file.isatty() - Returns True if the file is connected to a tty(-like) device, else False.
# next(file) - Returns the next line from the file each time it is being called.
# file.read([size]) - Reads at most size bytes from the file (less if the read hits EOF before obtaining size bytes).
# file.readline([size]) - Reads one entire line from the file. A trailing newline character is kept in the string.
# file.readlines([sizehint]) - Reads until EOF using readline() and return a list containing the lines. If the optional sizehint argument is present,
# instead of reading up to EOF, whole lines totalling approximately sizehint bytes (possibly after rounding up to an internal buffer size) are read.
# file.seek(offset[, whence]) - Sets the file's current position
# file.tell() - Returns the file's current position
# file.truncate([size]) - Truncates the file's size. If the optional size argument is present, the file is truncated to (at most) that size.
# file.write(str) - Writes a string to the file. There is no return value.
# file.writelines(sequence) - Writes a sequence of strings to the file. The sequence can be any iterable object producing strings, typically a list of strings.
#
#


# OS and directory methods:
# os.access(path, mode) - Use the real uid/gid to test for access to path.
# os.chdir(path) - Change the current working directory to path
# os.chflags(path, flags) - Set the flags of path to the numeric flags.
# os.chmod(path, mode) - Change the mode of path to the numeric mode.
# os.chown(path, uid, gid) - Change the owner and group id of path to the numeric uid and gid.
# os.chroot(path) - Change the root directory of the current process to path.
# os.close(fd) - Close file descriptor fd.
# os.closerange(fd_low, fd_high) - Close all file descriptors from fd_low (inclusive)
# to fd_high (exclusive), ignoring errors.
# os.fchdir(fd) - Change the current working directory to the directory represented by the file descriptor fd.
# os.fchmod(fd, mode) - Change the mode of the file given by fd to the numeric mode.
# os.fchown(fd, uid, gid) - Change the owner and group id of the file given by fd to the numeric uid and gid.
# os.fdatasync(fd) - Force write of file with filedescriptor fd to disk.
# os.fdopen(fd[, mode[, bufsize]]) - Return an open file object connected to the file descriptor fd.
# os.fpathconf(fd, name) - Return system configuration information relevant to an open file. name specifies the configuration value to retrieve.
# os.fstat(fd) - Return status for file descriptor fd, like stat().
# os.fstatvfs(fd) - Return information about the filesystem containing the file associated with file descriptor fd, like statvfs().
# os.fsync(fd) Force write of file with filedescriptor fd to disk.
# os.ftruncate(fd, length) -Truncate the file corresponding to file descriptor fd, so that it is at most length bytes in size.
#

#  os.getcwd() - Return a string representing the current working directory.
#  os.isatty(fd) - Return True if the file descriptor fd is open and connected to a tty(-like) device,else False.
#  os.link(src, dst) - Create a hard link pointing to src named dst.
#  os.listdir(path) - Return a list containing the names of the entries in the directory given by path.
#  os.lseek(fd, pos, how) - Set the current position of file descriptor fd to position pos, modified by how.
#  os.major(device) - Extract the device major number from a raw device number.
#  os.makedev(major, minor) - Compose a raw device number from the major and minor device numbers.
#  os.makedirs(path[, mode]) - Recursive directory creation function.
#  os.minor(device) - Extract the device minor number from a raw device number .
#  os.mkdir(path[, mode]) - Create a directory named path with numeric mode mode.
#  os.mkfifo(path[, mode])- Create a FIFO (a named pipe) named path with numeric mode mode. The default mode is 0666 (octal).
#  os.mknod(filename[, mode=0600, device]) - Create a filesystem node (file, device special file or named pipe) named filename.
#  os.open(file, flags[, mode])- Open the file file and set various flags according to flags and possibly its mode according to mode.
#  os.openpty() - Open a new pseudo-terminal pair. Return a pair of file descriptors (master, slave) for the pty and the tty, respectively.
#  os.pathconf(path, name) - Return system configuration information relevant to a named file.
#
#

#  os.pipe() - Create a pipe. Return a pair of file descriptors (r, w) usable for reading and writing, respectively.
#  os.popen(command[, mode[, bufsize]]) - Open a pipe to or from command.
#  os.read(fd, n) - Read at most n bytes from file descriptor fd. Return a string containing the
#  bytes read. If the end of the file referred to by fd has been reached, an empty string is returned.
#  os.readlink(path) - Return a string representing the path to which the symbolic link points.
#  os.remove(path) - Remove the file path.
#  os.removedirs(path) - Remove directories recursively.
#  os.rename(src, dst) - Rename the file or directory src to dst.
#  os.renames(old, new) - Recursive directory or file renaming function.
#  os.rmdir(path) - Remove the directory path
#  os.stat(path) - Perform a stat system call on the given path.
#  os.stat_float_times([newvalue]) - Determine whether stat_result represents time stamps as float objects.
#  os.statvfs(path) - Perform a statvfs system call on the given path.
#  os.symlink(src, dst) - Create a symbolic link pointing to src named dst.
#  os.tcgetpgrp(fd) - Return the process group associated with the terminal given by fd (an open file descriptor as returned by open()).
#  os.tcsetpgrp(fd, pg) - Set the process group associated with the terminal given by fd (an open file descriptor as returned by open()) to pg.
#  os.tempnam([dir[, prefix]]) - Return a unique path name that is reasonable for creating a temporary file.
#  os.tmpfile() - Return a new file object opened in update mode (w+b).
#  os.tmpnam() - Return a unique path name that is reasonable for creating a temporary file.
#  os.ttyname(fd) - Return a string which specifies the terminal device associated with file
#  descriptor fd. If fd is not associated with a terminal device, an exception is raised.
#  os.unlink(path) - Remove the file path.
#  os.utime(path, times) - Set the access and modified times of the file specified by path.
#  os.walk(top[, topdown=True[, onerror=None[, followlinks=False]]])
#  generate the file names in a directory tree by walking the tree either top-down or bottom-up.
#  os.write(fd, str) - Write the string str to file descriptor fd. Return the number of bytes actually written.
#
#
#
#
#
#
#
#
#
#
#