/* FUN_2c630a98 @ 0x2c630a98 */

/* WARNING: Removing unreachable block (ram,0x2c630984) */
/* WARNING: Removing unreachable block (ram,0x2c630988) */
/* WARNING: Removing unreachable block (ram,0x2c630994) */
/* WARNING: Removing unreachable block (ram,0x2c630996) */
/* WARNING: Removing unreachable block (ram,0x2c6309a0) */
/* WARNING: Removing unreachable block (ram,0x2c6309a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c630a98(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int unaff_r6;
  int iVar11;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [2];
  undefined2 uStack_52;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined1 auStack_44 [32];
  int iStack_24;
  int iStack_1c;
  int iStack_18;
  
  iStack_1c = *_LAB_2c630c0c;
  iVar5 = FUN_2c602408(param_2,param_2,param_3,0);
  if (iVar5 == 0x15) {
    FUN_2c602400(param_2);
    iVar5 = FUN_2c602400(param_2);
    iVar6 = FUN_2c6041d4();
    FUN_2c6129e4(auStack_44);
    FUN_2c6007ec(iVar6,0,auStack_44);
    iVar4 = FUN_2c602608(param_2);
    uVar7 = *(undefined4 *)(iVar4 + 8);
    iVar11 = FUN_2c62a6b4(auStack_5c,uVar7,iVar6 + 0x14);
    if (iVar11 != 0) {
      *(undefined1 **)(iVar4 + 8) = auStack_5c;
      FUN_2c6307e4(iVar6,auStack_54);
      uStack_4c = *(undefined2 *)(iVar5 + 0x14);
      uStack_4a = *(undefined2 *)(iVar5 + 0x16);
      uStack_48 = *(undefined2 *)(iVar5 + 0x18);
      uStack_46 = uStack_52;
      iVar6 = FUN_2c62a6b4(&uStack_4c,*(undefined4 *)(iVar4 + 8));
      uVar10 = *(undefined4 *)(iVar4 + 8);
      if (iVar6 != 0) {
        *(undefined2 **)(iVar4 + 8) = &uStack_4c;
        uVar9 = FUN_2c63736c(iVar5);
        FUN_2c612a20(iVar4,auStack_44,iVar5 + 0x14,uVar9,0);
        *(undefined4 *)(iVar4 + 8) = uVar10;
      }
      uStack_4c = *(undefined2 *)(iVar5 + 0x14);
      uStack_4a = uStack_4e;
      uStack_48 = *(undefined2 *)(iVar5 + 0x18);
      uStack_46 = *(undefined2 *)(iVar5 + 0x1a);
      iVar6 = FUN_2c62a6b4(&uStack_4c,uVar10);
      if (iVar6 != 0) {
        *(undefined2 **)(iVar4 + 8) = &uStack_4c;
        uVar10 = FUN_2c63736c(iVar5);
        FUN_2c612a20(iVar4,auStack_44,iVar5 + 0x14,uVar10,0);
      }
      *(undefined4 *)(iVar4 + 8) = uVar7;
    }
  }
  else {
    iVar6 = FUN_2c602110(_LAB_2c630c10,param_2);
    if (iVar6 == 1) {
      uVar7 = FUN_2c602400(param_2);
      if (iVar5 == 0x13) {
        psVar8 = (short *)FUN_2c602410(param_2);
        FUN_2c6041d4(uVar7);
        iVar6 = FUN_2c63076c();
        iVar4 = FUN_2c6073ec(uVar7);
        iVar5 = iVar6 - iVar4;
        if (iVar6 - iVar4 < (int)*psVar8) {
          iVar5 = (int)*psVar8;
        }
        *psVar8 = (short)iVar5;
      }
      else if (iVar5 == 0x29) {
        iVar5 = FUN_2c6041d4();
        if (*_LAB_2c630c0c == iStack_1c) {
          iStack_24 = *_LAB_2c630a88;
          iStack_18 = unaff_r6;
          iVar6 = FUN_2c6041dc(iVar5,0,0,0);
          if (iVar6 == 0) {
            if (*_LAB_2c630a88 == iStack_24) {
              return;
            }
LAB_2c630a84:
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          uVar7 = FUN_2c63736c();
          iVar4 = FUN_2c604148(iVar6,0,uVar7);
          if (iVar4 == 2) {
            iVar11 = FUN_2c607404(iVar5);
            iVar4 = FUN_2c6073ec(iVar6);
            iVar11 = iVar11 - iVar4;
            if (iVar11 < 0) {
              iVar11 = iVar11 + 1;
            }
            FUN_2c606fa8(iVar6,(iVar11 << 0xf) >> 0x10);
          }
          else if (iVar4 == 3) {
            sVar3 = FUN_2c607404(iVar5);
            sVar2 = FUN_2c6073ec(iVar6);
            FUN_2c606fa8(iVar6,(int)(short)(sVar3 - sVar2));
          }
          else if (iVar4 == 1) {
            FUN_2c606fa8(iVar6,0);
          }
          iVar4 = FUN_2c6033b4(iVar5,0,0x57);
          sVar2 = FUN_2c6033b4(iVar5,0,0x59);
          sVar3 = *(short *)(iVar4 + 8);
          iVar11 = (int)sVar3;
          iVar4 = FUN_2c607440(iVar5);
          FUN_2c6033b4(iVar5,0,100);
          if ((int)((uint)*(byte *)(iVar5 + 0x2a) << 0x1f) < 0) {
            FUN_2c630880(iVar5);
          }
          sVar1 = *(short *)(iVar5 + 0x26);
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          if (iVar11 < 0) {
            iVar11 = iVar11 + 1;
          }
          FUN_2c62e838(iVar6,_LAB_2c630a8c);
          iVar5 = (int)(short)((short)(iVar4 >> 1) -
                              (sVar1 * (sVar2 + sVar3) + (short)(iVar11 >> 1)));
          if (*_LAB_2c630a88 != iStack_24) goto LAB_2c630a84;
          iVar11 = *DAT_2c607044;
          iVar4 = FUN_2c603c78(iVar6,8,&iStack_18,0);
          if (iVar4 == 1) {
            if (iStack_18 == iVar5) goto LAB_2c607024;
          }
          else if (iVar4 != 0) goto LAB_2c607024;
          FUN_2c606cd0(iVar6,iVar5,0);
LAB_2c607024:
          if (*DAT_2c607044 == iVar11) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        goto LAB_2c630c08;
      }
    }
  }
  if (*_LAB_2c630c0c == iStack_1c) {
    return;
  }
LAB_2c630c08:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

