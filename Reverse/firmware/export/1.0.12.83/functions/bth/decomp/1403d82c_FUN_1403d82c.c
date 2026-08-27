/* FUN_1403d82c @ 0x1403d82c */

void FUN_1403d82c(int param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_1402a6e8(4,0x163,DAT_1403d8a8,DAT_1403d8a4,DAT_1403d8a0,*(undefined1 *)(param_1 + 1));
  FUN_140b06dc(param_1,param_2);
  uVar5 = DAT_1403d8b0;
  uVar4 = DAT_1403d8ac;
  uVar3 = DAT_1403d8a8;
  uVar2 = DAT_1403d8a4;
  if (5 < param_2) {
    uVar6 = 5;
    do {
      uVar7 = (uint)*(byte *)(param_1 + uVar6 + 1);
      puVar1 = (undefined1 *)(param_1 + uVar6);
      uVar6 = uVar6 + uVar7 + 3;
      FUN_1402a6e8(4,0x16c,uVar3,uVar2,uVar4,*puVar1);
      FUN_1402a9fc(uVar5,1,uVar7,(uVar6 - uVar7) + param_1);
    } while (uVar6 < param_2);
  }
  return;
}

