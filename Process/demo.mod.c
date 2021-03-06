#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7377b0b2, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa78b1427, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x75607057, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x952664c5, __VMLINUX_SYMBOL_STR(do_exit) },
	{ 0x68aca4ad, __VMLINUX_SYMBOL_STR(down) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdc6b187, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C0B52CA3D13F03469D4BD1D");
