/* thunk_FUN_14073d40 @ 0x140749f4 */

void thunk_FUN_14073d40(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  
  uVar4 = DAT_14073db0;
  uVar3 = DAT_14073dac;
  uVar2 = DAT_14073da8;
  piVar1 = DAT_14073da4;
  iVar5 = *DAT_14073da4;
  while( true ) {
    if (iVar5 == 0) {
      return;
    }
    uVar7 = 0x1fU - LZCOUNT(iVar5) & 0xff;
    if (6 < uVar7) break;
    pcVar6 = (code *)piVar1[uVar7 + 1];
    if (pcVar6 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,uVar4,0xd4,uVar2);
    }
    (*pcVar6)();
    iVar5 = *piVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,uVar3,0xc6,uVar2,uVar7,iVar5);
}

