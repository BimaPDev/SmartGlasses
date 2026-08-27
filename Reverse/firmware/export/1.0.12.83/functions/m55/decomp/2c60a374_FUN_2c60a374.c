/* FUN_2c60a374 @ 0x2c60a374 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c60a374(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  undefined4 uVar10;
  uint in_fpscr;
  undefined1 auStack_140 [36];
  undefined1 auStack_11c [68];
  undefined1 auStack_d8 [172];
  int iStack_2c;
  
  iVar5 = param_4 + -2;
  iStack_2c = *_LAB_2c60a520;
  uVar7 = _LAB_2c60a528 * iVar5 + _LAB_2c60a524;
  if (_LAB_2c60a524 < (uVar7 >> 1 | uVar7 * -0x80000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c60a53c,0x3a,_LAB_2c60a538,_LAB_2c60a534,param_4);
  }
  uVar7 = *param_2;
  psVar8 = (short *)param_1[1];
  sVar1 = psVar8[2];
  sVar2 = *psVar8;
  sVar3 = psVar8[3];
  sVar4 = psVar8[1];
  uVar9 = ((int)((ulonglong)((longlong)_LAB_2c60a52c * (longlong)iVar5) >> 0x20) - (iVar5 >> 0x1f))
          + 2U & 0xff;
  puVar6 = (undefined1 *)lv_mem_alloc(uVar9);
  FUN_2c62c3b0(puVar6,uVar9);
  *puVar6 = 2;
  puVar6[uVar9 - 1] = 0;
  if (uVar9 != 2) {
    iVar5 = 1;
    do {
      puVar6[iVar5] = 8;
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < (int)(uVar9 - 1));
  }
  iVar5 = (int)(short)((sVar1 + 1) - sVar2);
  iVar5 = FUN_2c609e04(auStack_d8,iVar5,(int)(short)((sVar3 + 1) - sVar4),iVar5 << 2,*param_1,0);
  if (iVar5 == 1) {
    FUN_2c4b3d1c(auStack_140);
    uVar10 = func_0x2c4b37dc(puVar6,4,1);
    func_0x2c4b36a0(uRam2c60a530,uRam2c60a530,uRam2c60a530,auStack_11c,1,0,uVar10,0);
    iVar5 = func_0x2c4b3838(auStack_11c,puVar6,param_3,4);
    if (iVar5 == 0) {
      uVar10 = VectorSignedToFloat((int)(short)param_2[1],(byte)(in_fpscr >> 0x16) & 3);
      uVar7 = (uVar7 & 0xff) << 0x10 | (uVar7 & 0xffffff) >> 0x10 | uVar7 & 0xff000000 |
              uVar7 & 0xff00;
      iVar5 = func_0x2c4b2c10(uVar10,0x41000000,uRam2c60a530,auStack_11c,0x1701,0x1801,0,0,uVar7);
      if (((iVar5 == 0) && (iVar5 = FUN_2c4b1338(auStack_11c), iVar5 == 0)) &&
         (iVar5 = func_0x2c4b36fc(auStack_11c,1), iVar5 == 0)) {
        iVar5 = FUN_2c4af844(auStack_d8,auStack_11c,0x1900,auStack_140,0x2000,uVar7);
        if (((iVar5 == 0) && (iVar5 = FUN_2c4ae4d8(), iVar5 == 0)) &&
           (iVar5 = FUN_2c4b3718(auStack_11c), iVar5 == 0)) {
          FUN_2c62bea8(puVar6);
          uVar10 = 1;
          goto LAB_2c60a420;
        }
      }
    }
  }
  uVar10 = 0;
LAB_2c60a420:
  if (*_LAB_2c60a520 == iStack_2c) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

