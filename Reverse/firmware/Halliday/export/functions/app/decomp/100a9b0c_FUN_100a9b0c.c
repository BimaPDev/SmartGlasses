/* FUN_100a9b0c @ 0x100a9b0c */

undefined4 FUN_100a9b0c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_44 [2];
  undefined1 local_42;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined1 *puStack_34;
  undefined1 auStack_30 [28];
  
  FUN_1011ea48(auStack_44,0,0x14);
  if (((param_1 == 0) && (param_1 = *DAT_100a9bbc, param_1 == 0)) || (*(int *)(param_1 + 4) == 0)) {
    uVar3 = 0xffffffea;
  }
  else {
    puVar1 = (undefined4 *)FUN_100a92d4(0x14,0);
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = 0xfffffff4;
    }
    else {
      FUN_1012e0e0(auStack_30);
      FUN_1011dbf4(DAT_100a9bc0,0xffffffff);
      uVar3 = DAT_100a9bc4;
      *puVar1 = *(undefined4 *)(param_1 + 4);
      puVar1[1] = 0;
      puVar1[2] = param_2;
      puVar1[3] = 0x14;
      local_42 = 0x8e;
      local_38 = DAT_100a9bc8;
      local_3c = puVar1;
      puStack_34 = auStack_30;
      iVar2 = FUN_1009ece8(uVar3,auStack_44);
      if (iVar2 == 0) {
        FUN_100a92e4(puVar1);
        uVar3 = 0xfffffff0;
        FUN_100a9314();
      }
      else {
        iVar2 = FUN_1011dbde(auStack_30,0xffffffff);
        if (iVar2 == 0) {
          FUN_100a92e4(puVar1);
          FUN_100a9314();
          uVar3 = 0;
        }
        else {
          FUN_100a92e4(puVar1);
          uVar3 = 0xffffffc2;
          FUN_100a9314();
        }
      }
    }
  }
  return uVar3;
}

