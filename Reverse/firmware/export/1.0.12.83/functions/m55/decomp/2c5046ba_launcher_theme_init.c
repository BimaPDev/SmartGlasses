/* launcher_theme_init @ 0x2c5046ba */

int * launcher_theme_init(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = param_1 + 1;
  *param_1 = param_4 + 8;
  param_1[1] = param_4 + 0xb0;
  func_0x2c504200(param_1 + 0x11);
  iVar1 = func_0x2c5044e0(param_2);
  param_1[4] = 0;
  param_1[2] = iVar1;
  param_1[3] = 0;
  iVar1 = lv_mem_alloc(0x2c0);
  FUN_2c507e10(iVar1,param_1,piVar4);
  param_1[5] = iVar1;
  iVar1 = lv_mem_alloc(0x1c);
  func_0x2c50d92c(iVar1,param_1,piVar4);
  param_1[6] = iVar1;
  iVar1 = lv_mem_alloc(0x1c);
  func_0x2c505064(iVar1,param_1,piVar4);
  param_1[7] = iVar1;
  iVar1 = lv_mem_alloc(200);
  func_0x2c50d678(iVar1,param_1,piVar4);
  param_1[8] = iVar1;
  iVar1 = lv_mem_alloc(0xcc);
  func_0x2c50e16c(iVar1,param_1,piVar4);
  param_1[9] = iVar1;
  iVar1 = lv_mem_alloc(0x2d8);
  theme_style_radius12_b(iVar1,param_1,piVar4);
  param_1[10] = iVar1;
  iVar1 = lv_mem_alloc(0x428);
  theme_style_radius12_a(iVar1,param_1,piVar4);
  param_1[0xb] = iVar1;
  iVar1 = lv_mem_alloc(0x6c);
  func_0x2c507434(iVar1,param_1,piVar4);
  param_1[0xc] = iVar1;
  iVar1 = lv_mem_alloc(0x58);
  theme_style_radius12_c(iVar1,param_1,piVar4);
  param_1[0xd] = iVar1;
  iVar1 = lv_mem_alloc(0x2c);
  func_0x2c506564(iVar1,param_1,piVar4);
  param_1[0x10] = iVar1;
  iVar1 = lv_mem_alloc(0x424);
  func_0x2c50aa7c(iVar1,param_1,piVar4);
  param_1[0xf] = iVar1;
  iVar1 = lv_mem_alloc(0x3d8);
  func_0x2c50c2dc(iVar1,param_1,piVar4);
  param_1[0xe] = iVar1;
  func_0x2c504644(param_1,param_1[5]);
  uVar2 = FUN_2c503ed8();
  uVar3 = FUN_2c5e33e4();
  func_0x2c50407c(uVar2,uVar3);
  return param_1;
}

