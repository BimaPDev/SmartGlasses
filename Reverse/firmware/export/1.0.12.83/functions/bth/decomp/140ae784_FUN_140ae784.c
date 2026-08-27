/* FUN_140ae784 @ 0x140ae784 */

void FUN_140ae784(uint *param_1,code *param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  
  pcVar2 = DAT_140ae7cc;
  if (param_2 != (code *)0x0) {
    pcVar2 = param_2;
  }
  while( true ) {
    if (param_1 == (uint *)&Reset) {
      return;
    }
    uVar1 = *param_1 & 0xfffffffc;
    if (uVar1 == 0) break;
    (*pcVar2)(param_1 + 1,uVar1,~*param_1 & 1,param_3);
    uVar1 = *param_1;
    param_1 = (uint *)((int)(param_1 + 1) + (uVar1 & 0xfffffffc));
    if ((uVar1 & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140ae7d4,DAT_140ae7d0,0x1d7);
    }
  }
  return;
}

