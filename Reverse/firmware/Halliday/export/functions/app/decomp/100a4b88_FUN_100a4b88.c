/* FUN_100a4b88 @ 0x100a4b88 */

undefined4 FUN_100a4b88(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  pbVar2 = DAT_100a4c40;
  iVar3 = DAT_100a4c28;
  iVar5 = 0x19;
  uVar4 = (DAT_100a4c20 - DAT_100a4c24) * 0x20 & 0xff00;
  uVar6 = uVar4 | DAT_100a4c44;
  uVar7 = param_2;
  while( true ) {
    uVar1 = DAT_100a4c2c;
    if (0x18 < *pbVar2) {
      *pbVar2 = 0;
    }
    FUN_100a5b78(uVar6,uVar1,DAT_100a4c30,(uint)*pbVar2,*(undefined4 *)(iVar3 + (uint)*pbVar2 * 8),
                 uVar7,param_3);
    if (*(uint *)(iVar3 + (uint)*pbVar2 * 8) <= DAT_100a4c34) break;
    iVar5 = iVar5 + -1;
    *pbVar2 = *pbVar2 + 1;
    if (iVar5 == 0) {
      return 0;
    }
  }
  FUN_1012da7a(param_1);
  FUN_100a5b78(DAT_100a4c38 | uVar4,DAT_100a4c2c,DAT_100a4c3c,*(undefined1 *)(param_1 + 2),
               *(undefined1 *)(param_1 + 1),uVar7,param_3);
  iVar3 = *(int *)(iVar3 + (uint)*pbVar2 * 8 + 4);
  *pbVar2 = *pbVar2 + 1;
  *(bool *)param_2 = iVar3 != 0;
  return 0;
}

