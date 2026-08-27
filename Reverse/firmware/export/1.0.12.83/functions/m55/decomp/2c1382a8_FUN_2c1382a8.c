/* FUN_2c1382a8 @ 0x2c1382a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1382a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = _DAT_2c1382f8;
  iVar2 = _DAT_2c1382f4;
  iVar1 = _DAT_2c1382f0;
  iVar6 = 0;
  while( true ) {
    iVar5 = iVar1 + iVar6 * 0x20;
    if (*(int *)(iVar5 + 0x14) << 0x1f < 0) {
      *(undefined4 *)(iVar5 + 0xc) = 1;
      pcVar4 = *(code **)(iVar2 + iVar6 * 4 + 0x10);
      if (pcVar4 == (code *)0x0) {
        *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) & 0xffffffdf;
      }
      else {
        (*pcVar4)(-(*(int *)(iVar3 + 4) + *(int *)(_DAT_2c1382fc + iVar6 * 4 + 0x10)));
      }
    }
    if (iVar6 != 0) break;
    iVar6 = 1;
  }
  return;
}

