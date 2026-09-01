/* FUN_100c80a0 @ 0x100c80a0 */

void FUN_100c80a0(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = (uint)*(byte *)(DAT_100c80bc + 0xe);
  if (uVar1 <= *(byte *)(DAT_100c80bc + 0xe)) {
    uVar2 = uVar1;
  }
  FUN_1011ea40(param_1,DAT_100c80bc,uVar2 * 7,uVar1,param_4);
  *param_2 = uVar2;
  return;
}

