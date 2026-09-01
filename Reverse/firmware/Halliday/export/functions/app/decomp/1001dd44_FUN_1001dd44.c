/* FUN_1001dd44 @ 0x1001dd44 */

void FUN_1001dd44(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 unaff_lr;
  
  iVar1 = DAT_1001dda0;
  iVar4 = *DAT_1001dd98;
  pbVar5 = (byte *)(param_1 + -1);
  puVar2 = DAT_1001dd9c;
  do {
    pbVar5 = pbVar5 + 1;
    if (5 < *pbVar5) break;
    *puVar2 = *(undefined4 *)(iVar1 + (uint)*pbVar5 * 4);
    puVar2 = puVar2 + 1;
  } while (pbVar5 != (byte *)(param_1 + 2));
  iVar1 = FUN_1001dcdc();
  if (iVar1 == 0) {
    if (*DAT_1001dd98 == iVar4) {
      return;
    }
  }
  else {
    uVar3 = 0;
    if (*DAT_1001dd98 == iVar4) goto LAB_1001dc64;
  }
  iVar1 = FUN_1013cdc0();
  uVar3 = extraout_r2;
LAB_1001dc64:
  iVar4 = *DAT_1001dc94;
  thunk_FUN_1009efe8(DAT_1001dc9c,DAT_1001dc98,0xc,0,iVar1,iVar4,uVar3,unaff_lr);
  if (*DAT_1001dc94 != iVar4) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1001dc9c);
  return;
}

