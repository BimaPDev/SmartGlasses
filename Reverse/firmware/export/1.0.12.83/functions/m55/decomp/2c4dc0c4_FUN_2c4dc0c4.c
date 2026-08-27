/* FUN_2c4dc0c4 @ 0x2c4dc0c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4dc0c4(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  uVar4 = (**(code **)(*param_1 + 0x50))();
  uVar1 = _LAB_2c4dc174;
  *_LAB_2c4dc170 = uVar4;
  piVar5 = (int *)func_0x2c4cb8c4(param_1[0x67]);
  uVar4 = _DAT_2c4dc178;
  param_1[0x58] = *piVar5;
  *(char *)(param_1 + 0x59) = (char)piVar5[2];
  iVar6 = piVar5[1];
  param_1[0x5e] = iVar6;
  param_1[0x5d] = piVar5[1];
  param_1[0x5b] = iVar6;
  param_1[0x5c] = 0;
  func_0x2c4df538(param_1 + 0x57,param_1 + 0x3e,0);
  func_0x2c4df538(param_1 + 0x57,param_1 + 0x14,_LAB_2c4dc17c);
  uVar3 = _LAB_2c4dc184;
  uVar2 = _LAB_2c4dc180;
  *(undefined1 *)(param_1 + 0x68) = 1;
  FUN_2c4e0504(uVar3,7,0,0,uVar4,0xc9,uVar1,0x1300,uVar2,param_1[0x58]);
  FUN_2c4e0504(_LAB_2c4dc184,7,0,0,uVar4,0xca,uVar1,0x1300,_LAB_2c4dc188,(char)param_1[0x59]);
  return 1;
}

