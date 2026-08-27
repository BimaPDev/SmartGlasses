/* FUN_2c5545a0 @ 0x2c5545a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5545a0(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  uint uStack_60;
  uint *puStack_5c;
  uint uStack_58;
  uint auStack_54 [4];
  uint *puStack_44;
  uint uStack_40;
  uint auStack_3c [4];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c55468c;
  puVar13 = *(undefined1 **)(param_1 + 4);
  uVar10 = *(uint *)(param_1 + 8);
  puStack_5c = auStack_54;
  if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c554cb2;
  uStack_60 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      auStack_54[0] = CONCAT31(auStack_54[0]._1_3_,*puVar13);
    }
    else if (uVar10 != 0) goto LAB_2c554a5c;
  }
  else {
    puStack_5c = (uint *)FUN_2c54f538(&uStack_60,0,param_3,0);
    auStack_54[0] = uStack_60;
LAB_2c554a5c:
    FUN_2c674668(puStack_5c,puVar13,uVar10);
  }
  *(undefined1 *)((int)puStack_5c + uStack_60) = 0;
  puStack_44 = auStack_3c;
  puVar13 = *(undefined1 **)(param_2 + 4);
  uVar10 = *(uint *)(param_2 + 8);
  uStack_58 = uStack_60;
  if (puVar13 != (undefined1 *)-uVar10 && puVar13 == (undefined1 *)0x0) {
LAB_2c554cb2:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c554cc0);
  }
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      auStack_3c[0] = CONCAT31(auStack_3c[0]._1_3_,*puVar13);
      goto LAB_2c55461c;
    }
    uStack_60 = uVar10;
    if (uVar10 == 0) goto LAB_2c55461c;
  }
  else {
    uStack_60 = uVar10;
    puStack_44 = (uint *)FUN_2c54f538(&uStack_60,0);
    auStack_3c[0] = uStack_60;
  }
  FUN_2c674668(puStack_44,puVar13,uVar10);
  uVar10 = uStack_60;
LAB_2c55461c:
  uStack_60 = uVar10;
  puVar3 = puStack_44;
  uVar2 = uStack_58;
  puVar1 = puStack_5c;
  uVar10 = uStack_60;
  *(undefined1 *)((int)puStack_44 + uStack_60) = 0;
  uVar6 = uStack_58;
  if (uStack_60 <= uStack_58) {
    uVar6 = uStack_60;
  }
  uStack_40 = uStack_60;
  if ((uVar6 == 0) || (iVar4 = FUN_2c66960c(puStack_5c,puStack_44), iVar4 == 0)) {
    iVar4 = uVar2 - uVar10;
  }
  if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar3);
  }
  if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar1);
  }
  uVar14 = 0;
  if (iVar4 == 0) {
    iVar5 = *(int *)(param_2 + 0x20);
    for (iVar4 = *(int *)(param_2 + 0x1c); iVar5 != iVar4; iVar4 = iVar4 + 0xbc) {
      puVar11 = *(undefined4 **)(param_1 + 0x1c);
      puVar7 = *(undefined4 **)(param_1 + 0x20);
      iVar8 = _LAB_2c5548ac * ((int)puVar7 - (int)puVar11 >> 2);
      if (0 < iVar8 >> 2) {
        puVar9 = puVar11 + (iVar8 >> 2) * 0xbc;
        do {
          FUN_2c5533c8(&puStack_44,puVar11);
          FUN_2c5533c8(&puStack_5c,iVar4);
          uVar2 = uStack_40;
          puVar3 = puStack_44;
          uVar10 = uStack_58;
          puVar1 = puStack_5c;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          if ((uVar6 == 0) || (iVar8 = FUN_2c66960c(puStack_44), iVar8 == 0)) {
            iVar8 = uVar2 - uVar10;
          }
          if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar3);
          }
          puVar12 = puVar11;
          if (iVar8 == 0) goto LAB_2c55488a;
          FUN_2c5533c8(&puStack_44,puVar11 + 0x2f);
          FUN_2c5533c8(&puStack_5c,iVar4);
          uVar2 = uStack_40;
          puVar3 = puStack_44;
          uVar10 = uStack_58;
          puVar1 = puStack_5c;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          if ((uVar6 == 0) || (iVar8 = FUN_2c66960c(puStack_44), iVar8 == 0)) {
            iVar8 = uVar2 - uVar10;
          }
          if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar3);
          }
          puVar12 = puVar11 + 0x2f;
          if (iVar8 == 0) goto LAB_2c55488a;
          FUN_2c5533c8(&puStack_44,puVar11 + 0x5e);
          FUN_2c5533c8(&puStack_5c,iVar4);
          uVar2 = uStack_40;
          puVar3 = puStack_44;
          uVar10 = uStack_58;
          puVar1 = puStack_5c;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          if ((uVar6 == 0) || (iVar8 = FUN_2c66960c(puStack_44), iVar8 == 0)) {
            iVar8 = uVar2 - uVar10;
          }
          if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar3);
          }
          puVar12 = puVar11 + 0x5e;
          if (iVar8 == 0) goto LAB_2c55488a;
          FUN_2c5533c8(&puStack_44,puVar11 + 0x8d);
          FUN_2c5533c8(&puStack_5c,iVar4);
          uVar2 = uStack_40;
          puVar3 = puStack_44;
          uVar10 = uStack_58;
          puVar1 = puStack_5c;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          if ((uVar6 == 0) || (iVar8 = FUN_2c66960c(puStack_44), iVar8 == 0)) {
            iVar8 = uVar2 - uVar10;
          }
          if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar3);
          }
          puVar12 = puVar11 + 0x8d;
          if (iVar8 == 0) goto LAB_2c55488a;
          puVar11 = puVar11 + 0xbc;
        } while (puVar9 != puVar11);
        iVar8 = _LAB_2c5548ac * ((int)puVar7 - (int)puVar11 >> 2);
      }
      puVar12 = puVar11;
      if (iVar8 == 2) {
LAB_2c554be0:
        FUN_2c5533c8(&puStack_44,puVar12);
        FUN_2c5533c8(&puStack_5c,iVar4);
        uVar2 = uStack_40;
        puVar3 = puStack_44;
        uVar10 = uStack_58;
        puVar1 = puStack_5c;
        uVar6 = uStack_40;
        if (uStack_58 <= uStack_40) {
          uVar6 = uStack_58;
        }
        if ((uVar6 == 0) || (iVar8 = FUN_2c66960c(puStack_44), iVar8 == 0)) {
          iVar8 = uVar2 - uVar10;
        }
        if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,puVar3);
        }
        if (iVar8 != 0) {
          puVar11 = puVar12 + 0x2f;
LAB_2c554ace:
          FUN_2c5533c8(&puStack_44,puVar11);
          FUN_2c5533c8(&puStack_5c,iVar4);
          uVar2 = uStack_40;
          puVar3 = puStack_44;
          uVar10 = uStack_58;
          puVar1 = puStack_5c;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          if ((uVar6 == 0) || (iVar8 = FUN_2c66960c(puStack_44,puStack_5c), iVar8 == 0)) {
            iVar8 = uVar2 - uVar10;
          }
          if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1);
          }
          if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar3);
          }
          puVar12 = puVar11;
          if (iVar8 != 0) goto LAB_2c554888;
        }
      }
      else if (iVar8 == 3) {
        FUN_2c5533c8(&puStack_44,puVar11);
        FUN_2c5533c8(&puStack_5c,iVar4);
        uVar2 = uStack_40;
        puVar3 = puStack_44;
        uVar10 = uStack_58;
        puVar1 = puStack_5c;
        uVar6 = uStack_40;
        if (uStack_58 <= uStack_40) {
          uVar6 = uStack_58;
        }
        if ((uVar6 == 0) || (iVar8 = FUN_2c66960c(puStack_44), iVar8 == 0)) {
          iVar8 = uVar2 - uVar10;
        }
        if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,puVar3);
        }
        if (iVar8 != 0) {
          puVar12 = puVar11 + 0x2f;
          goto LAB_2c554be0;
        }
      }
      else {
        if (iVar8 == 1) goto LAB_2c554ace;
LAB_2c554888:
        puVar12 = puVar7;
      }
LAB_2c55488a:
      if (*(undefined4 **)(param_1 + 0x20) == puVar12) {
        if (*(undefined4 **)(param_1 + 0x24) == puVar12) {
          FUN_2c551f3c(param_1 + 0x1c,puVar12,iVar4);
        }
        else {
          puVar7 = puVar12 + 3;
          *puVar12 = _LAB_2c554b84;
          puVar12[1] = puVar7;
          puVar13 = *(undefined1 **)(iVar4 + 4);
          uVar10 = *(uint *)(iVar4 + 8);
          if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
          goto LAB_2c554cb2;
          uStack_60 = uVar10;
          if (uVar10 < 0x10) {
            if (uVar10 == 1) {
              *(undefined1 *)(puVar12 + 3) = *puVar13;
            }
            else if (uVar10 != 0) goto LAB_2c554bb2;
          }
          else {
            puVar7 = (undefined4 *)FUN_2c54f538(&uStack_60,0);
            puVar12[1] = puVar7;
            puVar12[3] = uStack_60;
LAB_2c554bb2:
            FUN_2c674668(puVar7,puVar13,uVar10);
            puVar7 = (undefined4 *)puVar12[1];
          }
          puVar12[2] = uStack_60;
          *(undefined1 *)((int)puVar7 + uStack_60) = 0;
          puVar7 = puVar12 + 9;
          puVar12[7] = puVar7;
          puVar13 = *(undefined1 **)(iVar4 + 0x1c);
          uVar10 = *(uint *)(iVar4 + 0x20);
          if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
          goto LAB_2c554cb2;
          uStack_60 = uVar10;
          if (uVar10 < 0x10) {
            if (uVar10 == 1) {
              *(undefined1 *)(puVar12 + 9) = *puVar13;
            }
            else if (uVar10 != 0) goto LAB_2c554b58;
          }
          else {
            puVar7 = (undefined4 *)FUN_2c54f538(&uStack_60,0);
            puVar12[7] = puVar7;
            puVar12[9] = uStack_60;
LAB_2c554b58:
            FUN_2c674668(puVar7,puVar13,uVar10);
            puVar7 = (undefined4 *)puVar12[7];
          }
          puVar12[8] = uStack_60;
          *(undefined1 *)((int)puVar7 + uStack_60) = 0;
          puVar7 = puVar12 + 0xf;
          puVar12[0xd] = puVar7;
          puVar13 = *(undefined1 **)(iVar4 + 0x34);
          uVar10 = *(uint *)(iVar4 + 0x38);
          if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
          goto LAB_2c554cb2;
          uStack_60 = uVar10;
          if (uVar10 < 0x10) {
            if (uVar10 == 1) {
              *(undefined1 *)(puVar12 + 0xf) = *puVar13;
            }
            else if (uVar10 != 0) goto LAB_2c554b96;
          }
          else {
            puVar7 = (undefined4 *)FUN_2c54f538(&uStack_60,0);
            puVar12[0xd] = puVar7;
            puVar12[0xf] = uStack_60;
LAB_2c554b96:
            FUN_2c674668(puVar7,puVar13,uVar10);
            puVar7 = (undefined4 *)puVar12[0xd];
          }
          puVar12[0xe] = uStack_60;
          *(undefined1 *)((int)puVar7 + uStack_60) = 0;
          puVar7 = puVar12 + 0x15;
          puVar12[0x13] = puVar7;
          puVar13 = *(undefined1 **)(iVar4 + 0x4c);
          uVar10 = *(uint *)(iVar4 + 0x50);
          if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
          goto LAB_2c554cb2;
          uStack_60 = uVar10;
          if (uVar10 < 0x10) {
            if (uVar10 == 1) {
              *(undefined1 *)(puVar12 + 0x15) = *puVar13;
            }
            else if (uVar10 != 0) goto LAB_2c554bce;
          }
          else {
            puVar7 = (undefined4 *)FUN_2c54f538(&uStack_60,0);
            puVar12[0x13] = puVar7;
            puVar12[0x15] = uStack_60;
LAB_2c554bce:
            FUN_2c674668(puVar7,puVar13,uVar10);
            puVar7 = (undefined4 *)puVar12[0x13];
          }
          puVar12[0x14] = uStack_60;
          *(undefined1 *)((int)puVar7 + uStack_60) = 0;
          puVar7 = puVar12 + 0x1b;
          puVar12[0x19] = puVar7;
          puVar13 = *(undefined1 **)(iVar4 + 100);
          uVar10 = *(uint *)(iVar4 + 0x68);
          if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
          goto LAB_2c554cb2;
          uStack_60 = uVar10;
          if (uVar10 < 0x10) {
            if (uVar10 == 1) {
              *(undefined1 *)(puVar12 + 0x1b) = *puVar13;
            }
            else if (uVar10 != 0) goto LAB_2c554b74;
          }
          else {
            puVar7 = (undefined4 *)FUN_2c54f538(&uStack_60,0);
            puVar12[0x19] = puVar7;
            puVar12[0x1b] = uStack_60;
LAB_2c554b74:
            FUN_2c674668(puVar7,puVar13,uVar10);
            puVar7 = (undefined4 *)puVar12[0x19];
          }
          puVar12[0x1a] = uStack_60;
          *(undefined1 *)((int)puVar7 + uStack_60) = 0;
          puVar7 = puVar12 + 0x21;
          puVar12[0x1f] = puVar7;
          puVar13 = *(undefined1 **)(iVar4 + 0x7c);
          uVar10 = *(uint *)(iVar4 + 0x80);
          if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
          goto LAB_2c554cb2;
          uStack_60 = uVar10;
          if (uVar10 < 0x10) {
            if (uVar10 == 1) {
              *(undefined1 *)(puVar12 + 0x21) = *puVar13;
            }
            else if (uVar10 != 0) goto LAB_2c554abc;
          }
          else {
            puVar7 = (undefined4 *)FUN_2c54f538(&uStack_60,0);
            puVar12[0x1f] = puVar7;
            puVar12[0x21] = uStack_60;
LAB_2c554abc:
            FUN_2c674668(puVar7,puVar13,uVar10);
            puVar7 = (undefined4 *)puVar12[0x1f];
          }
          puVar12[0x20] = uStack_60;
          *(undefined1 *)((int)puVar7 + uStack_60) = 0;
          puVar7 = puVar12 + 0x27;
          puVar12[0x25] = puVar7;
          puVar13 = *(undefined1 **)(iVar4 + 0x94);
          uVar10 = *(uint *)(iVar4 + 0x98);
          if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
          goto LAB_2c554cb2;
          uStack_60 = uVar10;
          if (uVar10 < 0x10) {
            if (uVar10 == 1) {
              *(undefined1 *)(puVar12 + 0x27) = *puVar13;
            }
            else if (uVar10 != 0) goto LAB_2c554b3a;
          }
          else {
            puVar7 = (undefined4 *)FUN_2c54f538(&uStack_60,0);
            puVar12[0x25] = puVar7;
            puVar12[0x27] = uStack_60;
LAB_2c554b3a:
            FUN_2c674668(puVar7,puVar13,uVar10);
            puVar7 = (undefined4 *)puVar12[0x25];
          }
          puVar12[0x26] = uStack_60;
          *(undefined1 *)((int)puVar7 + uStack_60) = 0;
          puVar12[0x2b] = *(undefined4 *)(iVar4 + 0xac);
          FUN_2c550910(puVar12 + 0x2c,iVar4 + 0xb0);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0xbc;
        }
      }
      else {
        FUN_2c553dd0(puVar12,iVar4);
      }
    }
    uVar14 = 1;
  }
  if (*_LAB_2c55468c == iStack_2c) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

