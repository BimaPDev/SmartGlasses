/* FUN_100a955c @ 0x100a955c */

undefined4 FUN_100a955c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_4c [2];
  undefined1 local_4a;
  undefined4 *local_44;
  undefined4 local_40;
  undefined1 *puStack_3c;
  undefined1 auStack_38 [28];
  
  FUN_1011ea48(auStack_4c,0,0x14);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar3 = 0xffffffea;
  }
  else {
    puVar1 = (undefined4 *)FUN_100a92d4(0x14,0);
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = 0xfffffff4;
    }
    else {
      FUN_1012e0e0(auStack_38);
      uVar3 = DAT_100a95f8;
      *puVar1 = *(undefined4 *)(param_1 + 4);
      puVar1[1] = param_2;
      puVar1[4] = 0;
      local_40 = DAT_100a95fc;
      local_4a = 0x8a;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      local_44 = puVar1;
      puStack_3c = auStack_38;
      iVar2 = FUN_1009ece8(uVar3,auStack_4c);
      if (iVar2 == 0) {
        FUN_100a92e4(puVar1);
        uVar3 = 0xfffffff0;
      }
      else {
        iVar2 = FUN_1011dbde(auStack_38,0xffffffff);
        if (iVar2 == 0) {
          uVar3 = puVar1[4];
          FUN_100a92e4(puVar1);
        }
        else {
          FUN_100a92e4(puVar1);
          uVar3 = 0xffffffc2;
        }
      }
    }
  }
  return uVar3;
}

