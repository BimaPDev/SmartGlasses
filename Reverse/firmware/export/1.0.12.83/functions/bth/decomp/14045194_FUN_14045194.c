/* FUN_14045194 @ 0x14045194 */

void FUN_14045194(uint param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar6 = DAT_140454b4;
  puVar2 = DAT_14045464;
  FUN_1402a6e8(4,0x854,DAT_1404546c,DAT_14045468,DAT_14045460,DAT_140454b4,param_1);
  uVar5 = DAT_1404549c;
  FUN_1402a6e8(4,0x81e,DAT_1404546c,DAT_14045468,DAT_14045474,DAT_1404549c,DAT_14045470,*puVar2);
  puVar3 = DAT_14045478;
  uVar11 = (uint)*puVar2;
  if (((int)(uVar11 << 0x1e) < 0) && (DAT_14045478[0x5f] == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x721,DAT_14045498,uVar5);
  }
  if (((int)(uVar11 << 0x1d) < 0) && (DAT_14045478[0xc5e] == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x721,DAT_14045498,DAT_1404549c);
  }
  if (((int)(uVar11 << 0x1c) < 0) && (DAT_14045478[0xc5f] == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x721,DAT_14045498,DAT_1404549c);
  }
  if (((int)(uVar11 << 0x1a) < 0) && (DAT_14045478[0xc6c] == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x721,DAT_14045498,DAT_1404549c);
  }
  if (((int)(uVar11 << 0x18) < 0) && (DAT_14045478[0xc87] == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x721,DAT_14045498,DAT_1404549c);
  }
  if (((int)(uVar11 << 0x17) < 0) && (DAT_14045478[0xcfc] == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x721,DAT_14045498,DAT_1404549c);
  }
  uVar12 = (uint)(byte)DAT_14045478[1];
  uVar11 = param_1;
  uVar14 = param_2;
  FUN_1402a6e8(4,0x12f,DAT_1404546c,DAT_14045468,DAT_1404547c,uVar12,param_1,param_2);
  uVar13 = (uint)(byte)puVar3[1];
  if (param_1 == uVar13) {
    if (param_1 == 0) {
      FUN_1402a6e8(4,0x135,DAT_1404546c,DAT_14045468,DAT_140454b0,DAT_14045484,uVar11,uVar14);
    }
    else {
      if ((uVar13 == 2) && ((byte)puVar3[2] != param_2)) goto LAB_14045254;
      uVar14 = 0;
      FUN_1402a6e8(4,0x13f,DAT_1404546c,DAT_14045468,DAT_14045488,DAT_14045484,uVar13,0);
      puVar3[1] = 0;
      puVar3[2] = 0xff;
      uVar11 = uVar13;
    }
    iVar9 = FUN_140e5148(*(undefined4 *)(puVar3 + 0xe42),0xffffffff);
    puVar4 = DAT_14045530;
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x710,DAT_140454a0);
    }
    if (puVar3[0xc85] == '\0') {
      if (puVar3[0xc86] == '\0') {
        iVar9 = 2;
      }
      else {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = 0;
    }
    if (*puVar2 == 0) {
      if (((puVar3[0xc6d] == '\0') && (puVar3[0xc79] == '\0')) && (iVar9 == 2)) {
        *puVar3 = 0;
        *puVar4 = 0;
        FUN_14041b34();
        FUN_140e52d8(*(undefined4 *)(puVar3 + 0xe42));
        return;
      }
      FUN_1402a6e8(4,0x874,DAT_1404546c,DAT_14045468,DAT_1404548c,uVar6,uVar11,uVar14);
    }
    FUN_140e52d8(*(undefined4 *)(puVar3 + 0xe42));
    uVar8 = DAT_1404553c;
    puVar7 = DAT_14045530;
    uVar10 = DAT_140454ac;
    uVar6 = DAT_140454a4;
    uVar5 = DAT_14045494;
    puVar4 = DAT_14045490;
    if (puVar3[0xc6c] != '\0') {
      uVar1 = *puVar2;
      *DAT_14045490 = 5;
      uVar5 = DAT_140454a8;
      *puVar2 = uVar1 & 0xffdf;
      puVar3[0xc6c] = 0;
      FUN_14048958(0,0,uVar5);
      return;
    }
    if (iVar9 == 2) {
      if (puVar3[0xc87] == '\0') {
        if (puVar3[0xcfc] == '\0') {
          if ((puVar3[0xc6d] == '\0') && (puVar3[0xc79] == '\0')) {
            if (puVar3[0xc5e] == '\0') {
              if (puVar3[0xc5f] == '\0') {
                if (puVar3[0x5f] == '\0') {
                  return;
                }
                uVar1 = *puVar2;
                puVar3[0x5f] = 0;
                *puVar2 = uVar1 & 0xfffd;
                *puVar4 = 1;
                iVar9 = 0;
                uVar10 = uVar6;
              }
              else {
                *puVar2 = *puVar2 & 0xfff7;
                uVar10 = DAT_14045534;
                puVar3[0xc5f] = 0;
                *puVar7 = 3;
                iVar9 = 0;
              }
            }
            else {
              *DAT_14045530 = 2;
              uVar10 = DAT_14045540;
              uVar1 = *puVar2;
              puVar3[0xc5e] = 0;
              *puVar2 = uVar1 & 0xfffb;
              iVar9 = 0;
            }
          }
          else {
            iVar9 = 0;
            *puVar2 = *puVar2 & 0xffef;
            *puVar7 = 4;
            uVar10 = uVar8;
          }
        }
        else {
          *puVar2 = *puVar2 & 0xfeff;
          uVar10 = DAT_14045538;
          *puVar7 = 8;
          iVar9 = 0;
        }
      }
      else {
        *puVar2 = *puVar2 & 0xff7f;
        *puVar4 = 7;
        iVar9 = 0;
      }
    }
    else {
      uVar1 = *puVar2;
      puVar3[iVar9 + 0xc85] = 0;
      *puVar2 = uVar1 & 0xffbf;
      *puVar4 = 6;
      uVar10 = uVar5;
    }
    FUN_14048958(iVar9,0,uVar10);
    return;
  }
LAB_14045254:
  FUN_1402a6e8(4,0x85a,DAT_1404546c,DAT_14045468,DAT_14045480,uVar12,uVar11,uVar14);
  return;
}

