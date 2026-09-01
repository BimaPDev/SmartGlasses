/* FUN_100a99c4 @ 0x100a99c4 */

undefined4 FUN_100a99c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 auStack_4c [2];
  undefined1 local_4a;
  undefined4 *local_44;
  undefined4 local_40;
  undefined1 *puStack_3c;
  undefined1 auStack_38 [28];
  
  FUN_1011ea48(auStack_4c,0,0x14);
  if (((param_1 == 0) && (param_1 = *DAT_100a9a70, param_1 == 0)) || (*(int *)(param_1 + 4) == 0)) {
    uVar3 = 0xffffffea;
  }
  else {
    puVar1 = (undefined4 *)FUN_100a92d4(0x14,0);
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = 0xfffffff4;
    }
    else {
      FUN_1012e0e0(auStack_38);
      *puVar1 = *(undefined4 *)(param_1 + 4);
      puVar1[1] = 0;
      puVar1[3] = 0xc;
      local_40 = DAT_100a9a74;
      local_4a = 0x88;
      puVar1[2] = &local_58;
      local_58 = param_2;
      uStack_54 = param_3;
      local_50 = param_4;
      local_44 = puVar1;
      puStack_3c = auStack_38;
      iVar2 = FUN_1009ece8(DAT_100a9a78,auStack_4c);
      if (iVar2 == 0) {
        FUN_100a92e4(puVar1);
        uVar3 = 0xfffffff0;
      }
      else {
        iVar2 = FUN_1011dbde(auStack_38,0xffffffff);
        if (iVar2 == 0) {
          FUN_100a92e4(puVar1);
          uVar3 = 0;
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

