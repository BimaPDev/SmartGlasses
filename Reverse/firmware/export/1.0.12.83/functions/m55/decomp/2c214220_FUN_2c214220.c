/* FUN_2c214220 @ 0x2c214220 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c214220(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_r1;
  int iVar3;
  undefined4 *extraout_r2;
  uint extraout_r3;
  uint extraout_r3_00;
  uint unaff_r6;
  uint unaff_r7;
  bool bVar4;
  char in_OV;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  
  if (param_1 != 0 && param_1 < 0 == (bool)in_OV) {
    software_bkpt(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = SBORROW4(unaff_r6,param_3);
  *(uint *)(param_4 * 2) = unaff_r6 - param_3;
  *(uint *)(param_2 + 4) = unaff_r7;
  if (param_3 <= unaff_r6) {
    do {
      func_0x2c21e310(unaff_r7 & 0x11e000);
      func_0x2c21e316();
      bVar4 = (extraout_r3 & 0x40000000) != 0;
      unaff_r7 = extraout_r3 << 2;
      bVar5 = unaff_r7 == 0;
      func_0x2c21e31c();
      if (bVar4 && !bVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar1 = func_0x2c21e322();
      func_0x2c24e328(uVar1,extraout_r3_00 >> 0x12);
      uVar7 = func_0x2c25e32e(extraout_r1 >> 0xe);
      uVar1 = extraout_r2[2];
      iVar2 = func_0x2c61e530((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),*extraout_r2,extraout_r2[1]
                             );
      iVar3 = (unaff_r6 - param_3) * 2;
      *(char *)(iVar3 + iVar2) = (char)iVar2;
    } while (extraout_r3 << 5 == 0 || (int)(extraout_r3 << 5) < 0 != (bool)cVar6);
    *(undefined1 *)((int)unaff_r6 >> 3) = (char)(undefined1 *)((int)unaff_r6 >> 3);
    *(char *)(iVar3 + 3) = (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(param_4 + 4) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

