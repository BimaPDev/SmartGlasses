/* FUN_2c5d4824 @ 0x2c5d4824 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d4824(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  *(undefined4 *)(param_1 + 0x90) = param_2;
  uVar2 = FUN_2c5cfd1c(param_2);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  FUN_2c607048(uVar2,0x27d1,0x50);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x94),0x10,0);
  FUN_2c627e28(*(undefined4 *)(param_1 + 0x94),4);
  FUN_2c627e50(*(undefined4 *)(param_1 + 0x94),0,2);
  FUN_2c606d54(*(undefined4 *)(param_1 + 0x94),10,0);
  FUN_2c606d30(*(undefined4 *)(param_1 + 0x94),2,0);
  FUN_2c606d3c(*(undefined4 *)(param_1 + 0x94),2,0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x94),1,0);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x94),0xff00ff00,0);
  func_0x2c5db938(param_1 + 0x98,*(undefined4 *)(param_1 + 0x94));
  FUN_2c5d2df4(param_1,param_2);
  FUN_2c5d2f40(param_1,param_2);
  FUN_2c5d33ac(param_1,param_2);
  FUN_2c5d3580(param_1,param_2);
  FUN_2c5d3260(param_1,param_2);
  FUN_2c5d3d24(param_1,param_2);
  func_0x2c5d42f0(param_1);
  uVar1 = FUN_2c620f0c(0x3f7,_LAB_2c5d4814,param_1,param_4,unaff_r4,unaff_lr);
  uVar2 = _LAB_2c5d4818;
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  uVar1 = FUN_2c620f0c(0x3f6,uVar2,param_1);
  uVar2 = _LAB_2c5d481c;
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  uVar1 = FUN_2c620f0c(0x3fb,uVar2,param_1);
  uVar2 = _LAB_2c5d4820;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  uVar2 = FUN_2c620f0c(0x3fc,uVar2,param_1);
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  return;
}

