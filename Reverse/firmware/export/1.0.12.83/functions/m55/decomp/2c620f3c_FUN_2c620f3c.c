/* FUN_2c620f3c @ 0x2c620f3c */

undefined4 *
FUN_2c620f3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_2c628c58();
  FUN_2c628c58();
  puVar3 = (undefined4 *)FUN_2c62c968(DAT_2c620f88);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_2c62c3b0(puVar3,0x14);
    uVar2 = DAT_2c620f90;
    uVar1 = DAT_2c620f8c;
    *puVar3 = param_1;
    puVar3[2] = param_3;
    puVar3[1] = uVar1;
    puVar3[3] = param_2;
    *(undefined1 *)(puVar3 + 4) = 0;
    iVar4 = FUN_2c6025b4(param_2,uVar2,uVar1,0,param_4);
    if (iVar4 == 0) {
      FUN_2c602454(param_2,DAT_2c620f90,0x21,puVar3);
      return puVar3;
    }
  }
  return puVar3;
}

