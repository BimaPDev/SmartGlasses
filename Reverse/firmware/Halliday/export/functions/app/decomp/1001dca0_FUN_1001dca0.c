/* FUN_1001dca0 @ 0x1001dca0 */

void FUN_1001dca0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar1 = DAT_1001dcd8;
  iVar3 = *DAT_1001dcd4;
  *DAT_1001dcd8 = 0x4c;
  puVar1[1] = 0x17;
  puVar1[2] = 0x5f;
  uVar2 = 0;
  if (*DAT_1001dcd4 != iVar3) {
    param_1 = FUN_1013cdc0();
    uVar2 = extraout_r2;
  }
  iVar3 = *DAT_1001dc94;
  thunk_FUN_1009efe8(DAT_1001dc9c,DAT_1001dc98,0xc,0,param_1,iVar3,uVar2,unaff_lr);
  if (*DAT_1001dc94 != iVar3) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1001dc9c);
  return;
}

