#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module __section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[] __used
	__section("__versions") = {
		{ 0x306ff876, "module_layout" },
		{ 0x1afef154, "i2c_del_driver" },
		{ 0x78781f88, "i2c_register_driver" },
		{ 0x86332725, "__stack_chk_fail" },
		{ 0xc540d8dd, "input_register_device" },
		{ 0x252bc7f, "regmap_read" },
		{ 0xc393436c, "regmap_update_bits_base" },
		{ 0xfc52a477, "regmap_register_patch" },
		{ 0xa620497d, "__devm_regmap_init_i2c" },
		{ 0x139eb3a2, "input_set_capability" },
		{ 0x4f8f8d43, "devm_input_allocate_device" },
		{ 0x6d0894c3, "devm_gpiod_get_optional" },
		{ 0x766dcad9, "devm_regulator_get" },
		{ 0x9444d4e, "device_property_read_u32_array" },
		{ 0x47d4fbf8, "devm_kmalloc" },
		{ 0x8f678b07, "__stack_chk_guard" },
		{ 0x4205ad24, "cancel_work_sync" },
		{ 0x2d3385d3, "system_wq" },
		{ 0xb2d48a2e, "queue_work_on" },
		{ 0x8e865d3c, "arm_delay_ops" },
		{ 0x4bbb953d, "_dev_err" },
		{ 0x2f8a2dae, "regmap_write" },
		{ 0x5731ea83, "gpiod_set_value" },
		{ 0xb1ad28e0, "__gnu_mcount_nc" },
	};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,drv2605l");
MODULE_ALIAS("of:N*T*Cti,drv2605lC*");
MODULE_ALIAS("i2c:drv2605l");

MODULE_INFO(srcversion, "FB5DCA964A230DEAD9B6731");
