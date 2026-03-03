# Born2beRoot

*This proyect has been created as part of the 42 curriculum by <anbravo->.*

## Description

**Born2beRoot** is a system administration and virtualization project designed to introduce the core concepts of server infrastructure. The main objetive is to set up a secure **Debian** server from scratch, implementing strict security protocols, including an **encrypted LVM** (Logical Volume Manager) partitioning scheme, a robust password policy, an active system monitoring. The server operates strictly via the Command Line Interface(CLI), without any graphical user interface.

## Project Desing & Choices

### Operating System: Debian

We chose Debian for this proyect due its reputation for extreme stability and its robust package management system. It provides a clean, minimal enviroment that is ideal for learning the foundations of Linux system administration. While otrer options like Rocky Linux exist, Debian's predictable release cycle and extensive documentation make it the preferred choise for a secure, long-term server setup.

### Mandatory Access Control: AppArmor

Security is enforced using **AppArmor**, which is natively integrated into Debian. It protects the system by restricting programs' capabilities through path-based profiles. This ensures that even if a service is compromised, the attacker's access to the rest of the file systems is strictly limited.

### Firewall: UFW

To manage network traffic, I implemented **UFW**(Uncomplicated Firewall). It serves as a user-friendly interface for `iptables`, allowing me to enforced a stric"deny-by-default" policy. Only port 4243 is explicity opened to allow secure SSH connections, significantly reducing the server's attack surface.

### Hypervisor: VirtualBox

The virtual environment was built using **VirtualBox**. This hypervisor was selected for its reliability in managing virtual hardwere, its ability to handle encrypted disk images efficiently, and its straightforward Port Forwarding setting, which are essential for external SSH communication.

## Instructions

### Prerequisites

* **VirtualBox** installed on the host machine.

* The project's `.vdi` file and its corresponding `signature.txt`.

### Execution

1. Import the `.vdi` file as a hard disk in a new VirtualBox machine.

2. At the boot prompt, anter the **LVM encryption password**.

3. Log in with your user credentials.

4. The monitoring script is managed by `cron` and will broadcast system information every 10 minutes.

### SSH Connection

Connect from your host machine using: ssh anbravo-@localhost -p 4243

## Resources

### References

* **Debian Handbook:** Official documentation for system configuration.

* **Sudoer Manual:** Guidelines for implementing secure sudo policies.

* **LUKS/LVM Documentation:** Technical details on disk encryption and volume management.
