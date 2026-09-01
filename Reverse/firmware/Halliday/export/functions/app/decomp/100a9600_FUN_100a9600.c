/* FUN_100a9600 @ 0x100a9600 */

undefined4 FUN_100a9600(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_44 [2];
  undefined1 local_42;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined1 *puStack_34;
  undefined1 auStack_30 [24];
  
  FUN_1011ea48(auStack_44,0,0x14);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar3 = 0xffffffea;
  }
  else {
    puVar1 = (undefined4 *)FUN_100a92d4(0x14,0);
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = 0xfffffff4;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 4);
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      *puVar1 = uVar3;
      puVar1[1] = param_2;
      puVar1[4] = 0;
      local_42 = 0x8b;
      local_3c = puVar1;
      if (param_4 != 0) {
        FUN_1012e0e0(auStack_30);
        local_38 = DAT_100a96a4;
        puStack_34 = auStack_30;
      }
      iVar2 = FUN_1009ece8(DAT_100a96a8,auStack_44);
      if (iVar2 == 0) {
        FUN_100a92e4(puVar1);
        uVar3 = 0xfffffff0;
      }
      else {
        uVar3 = 0;
        if (param_4 != 0) {
          iVar2 = FUN_1011dbde(auStack_30,0xffffffff);
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
  }
  return uVar3;
}

