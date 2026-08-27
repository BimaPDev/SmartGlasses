/* FUN_2c4f0cc8 @ 0x2c4f0cc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f0cc8(int param_1,uint param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  piVar1 = _LAB_2c4f0dd8;
  uVar2 = (uint)((ulonglong)_LAB_2c4f0db0 * (ulonglong)param_2 >> 0x20);
  if ((uint)((ulonglong)_LAB_2c4f0db0 * (ulonglong)param_4 >> 0x26) != uVar2 >> 6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4f0dcc,_LAB_2c4f0dc8,param_2);
  }
  if (param_2 + (uVar2 >> 6) * -0x78 == 0) {
    if (param_2 != 0) {
      pcVar4 = (char *)(param_1 + 0x77);
      uVar2 = 0;
      do {
        pcVar5 = pcVar4 + -0x77;
        iVar6 = *_LAB_2c4f0db4;
        FUN_2c674668(iVar6 + 0x78,pcVar5);
        FUN_2c674668(pcVar5,iVar6,0x78);
        FUN_2c674668(iVar6,iVar6 + 0x78,0x78);
        pcVar3 = pcVar4 + -0x78;
        while (pcVar3 = pcVar3 + 1, *pcVar3 == 'U') {
          if (pcVar4 == pcVar3) {
            FUN_2c674268(param_3 + uVar2,0,0x78);
                    /* WARNING: Subroutine does not return */
            TRACE(4,0xae,_LAB_2c4f0dc0,_LAB_2c4f0dbc,_LAB_2c4f0db8,1);
          }
        }
        func_0x2c673d78(pcVar5,param_3 + uVar2,0x3c,0);
        uVar2 = uVar2 + 0x78;
        pcVar4 = pcVar4 + 0x78;
        *piVar1 = *piVar1 + 1;
      } while (uVar2 < param_2);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f0dd4,_LAB_2c4f0dd0,param_2);
}

