/* FUN_14048b4c @ 0x14048b4c */

uint FUN_14048b4c(code *param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
                 char param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_2 >> 0x10;
  uVar6 = param_4 & 0xff;
  param_4 = param_4 >> 0x10;
  iVar2 = FUN_14050350();
  if (iVar2 != 0) {
    if (param_6 != '\0') {
      (*param_1)(param_3,param_5,0);
      return 0;
    }
    return 0;
  }
  if ((param_2 & 0xff) == 0) {
    uVar5 = (uVar1 + 3 & 0xfffffffc) + 0x10 & 0xffff;
    puVar3 = (undefined4 *)thunk_FUN_14096d18((param_4 + 3 & 0xfffffffc) + uVar5 & 0xffff);
    uVar4 = FUN_140e5278(puVar3 + 4,param_3,uVar1);
    *puVar3 = uVar4;
    if (uVar6 != 0) goto LAB_14048be4;
  }
  else {
    if (uVar6 != 0) {
      FUN_140489b8(param_3,param_5,0,0,param_1);
      return uVar6;
    }
    puVar3 = (undefined4 *)
             thunk_FUN_14096d18((uVar1 + 3 & 0xfffffffc) + (param_4 + 3 & 0xfffffffc) + 0x10 &
                                0xffff);
    uVar5 = 0x10;
    *puVar3 = param_3;
  }
  FUN_140e5278(uVar5 + (int)puVar3,param_5,param_4);
  param_5 = uVar5 + (int)puVar3;
LAB_14048be4:
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[1] = param_5;
  FUN_14048a20(param_1,puVar3);
  return 1;
}

