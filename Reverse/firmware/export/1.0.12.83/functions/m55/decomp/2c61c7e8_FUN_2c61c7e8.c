/* FUN_2c61c7e8 @ 0x2c61c7e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61c7e8(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar12;
  undefined4 unaff_r6;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_r7;
  
  iVar5 = FUN_2c6041d4(param_2);
  piVar12 = _LAB_2c61cb1c;
  if (iVar5 == 0) {
    FUN_2c6036dc(param_2,*_LAB_2c61cb1c,0);
    iVar5 = *piVar12;
  }
  else {
    iVar5 = FUN_2c606c04(param_2,_LAB_2c61cb0c);
    if (iVar5 == 0) {
      iVar5 = FUN_2c606c04(param_2,_LAB_2c61cb24);
      piVar12 = _LAB_2c61cb1c;
      if (iVar5 != 0) {
        FUN_2c6036dc(param_2,*_LAB_2c61cb1c + 0x20,0);
        FUN_2c6036dc(param_2,*piVar12 + 0x28,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xd0,0);
        FUN_2c6036dc(param_2,*piVar12 + 0x58,0x20);
        FUN_2c6036dc(param_2,*piVar12 + 0xd8,0x20);
        FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
        FUN_2c6036dc(param_2,*piVar12 + 200,0x20);
        FUN_2c6036dc(param_2,*piVar12 + 0x38,1);
        FUN_2c6036dc(param_2,*piVar12 + 0x60,0x80);
        uVar6 = FUN_2c6041d4(param_2);
        iVar5 = FUN_2c606c04(uVar6,_LAB_2c61cb28);
        if (iVar5 == 0) {
          uVar6 = FUN_2c6041d4(param_2);
          iVar5 = FUN_2c606c04(uVar6,_LAB_2c61cb2c);
          if (iVar5 == 0) {
            return;
          }
        }
        FUN_2c6036dc(param_2,*piVar12 + 0x1d0,0);
        uVar9 = 0x20;
        iVar5 = *piVar12 + 0x1e0;
code_r0x2c6036dc:
        FUN_2c6032d4(param_2,uVar9,0xffff,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
        uVar10 = (*(ushort *)(param_2 + 0x22) & 0x1ff) >> 3;
        if ((*(ushort *)(param_2 + 0x22) & 0x1f8) == 0) {
          iVar4 = *(int *)(param_2 + 0xc);
          iVar8 = 8;
          uVar7 = 1;
          uVar14 = uVar10;
        }
        else {
          iVar4 = *(int *)(param_2 + 0xc);
          iVar8 = iVar4;
          uVar14 = 0;
          do {
            uVar13 = uVar14;
            pbVar1 = (byte *)(iVar8 + 7);
            iVar8 = iVar8 + 8;
            if ((*pbVar1 & 3) == 0) {
              uVar7 = uVar10 + 1 & 0x3f;
              iVar8 = uVar7 << 3;
              uVar10 = uVar13;
              uVar14 = uVar13 << 3;
              goto LAB_2c603734;
            }
            uVar14 = uVar13 + 1;
          } while (uVar14 != uVar10);
          uVar7 = uVar13 + 2 & 0x3f;
          iVar8 = uVar7 << 3;
          uVar10 = uVar14;
          uVar14 = (int)(short)uVar14 << 3;
        }
LAB_2c603734:
        *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xfe07 | (ushort)(uVar7 << 3);
        iVar4 = FUN_2c62bebc(iVar4,iVar8);
        *(int *)(param_2 + 0xc) = iVar4;
        uVar7 = (*(ushort *)(param_2 + 0x22) & 0x1ff) >> 3;
        while (uVar7 = uVar7 - 1, uVar10 < uVar7) {
          puVar11 = (undefined4 *)(iVar4 + uVar7 * 8);
          *puVar11 = puVar11[-2];
          puVar11[1] = puVar11[-1];
          iVar4 = *(int *)(param_2 + 0xc);
        }
        FUN_2c62c3b0(iVar4 + uVar14,8);
        pcVar2 = DAT_2c6037ac;
        *(int *)(*(int *)(param_2 + 0xc) + uVar14) = iVar5;
        iVar5 = uVar14 + *(int *)(param_2 + 0xc);
        *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) & 0xff000000 | uVar9;
        if (*pcVar2 == '\0') {
          return;
        }
        FUN_2c603540(param_2,uVar9,0xffff);
        return;
      }
      iVar5 = FUN_2c606c04(param_2,_LAB_2c61cb30);
      if (iVar5 != 0) {
        iVar5 = *_LAB_2c61cb1c + 0x150;
        uVar9 = 0;
        goto code_r0x2c6036dc;
      }
      iVar5 = FUN_2c606c04(param_2,_LAB_2c61cb34);
      if (iVar5 != 0) {
        uVar6 = FUN_2c6041d4(param_2);
        iVar5 = FUN_2c606c04(uVar6,_LAB_2c61cb38);
        piVar12 = _LAB_2c61ce74;
        if (iVar5 == 0) {
          uVar6 = FUN_2c6041d4(param_2);
          iVar5 = FUN_2c606c04(uVar6,_LAB_2c61cb10);
          piVar12 = _LAB_2c61ce74;
          if (iVar5 == 0) {
            uVar6 = FUN_2c6041d4(param_2);
            iVar5 = FUN_2c606c04(uVar6,_LAB_2c61cb18);
            piVar3 = _LAB_2c61ce74;
            piVar12 = _LAB_2c61cb1c;
            if (iVar5 == 0) {
              FUN_2c6036dc(param_2,*_LAB_2c61cb1c + 0x18,0);
              FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
              FUN_2c6036dc(param_2,*piVar12 + 0xa8,8);
              FUN_2c6036dc(param_2,*piVar12 + 0x20,0x50000);
              FUN_2c6036dc(param_2,*piVar12 + 0x60,_LAB_2c61cb3c);
              FUN_2c6036dc(param_2,*piVar12 + 0x58,_LAB_2c61cb40);
              FUN_2c6036dc(param_2,*piVar12 + 0x28,_LAB_2c61cb44);
              FUN_2c6036dc(param_2,*piVar12 + 0xa0,_LAB_2c61cb48);
              iVar5 = *piVar12 + 0xa8;
              uVar6 = _LAB_2c61cb4c;
            }
            else {
              FUN_2c6036dc(param_2,*_LAB_2c61ce74 + 0x180,0);
              FUN_2c6036dc(param_2,*piVar3 + 0xa0,4);
              FUN_2c6036dc(param_2,*piVar3 + 0xa8,8);
              FUN_2c6036dc(param_2,*piVar3 + 0x188,0x50000);
              FUN_2c6036dc(param_2,*piVar3 + 0x58,_LAB_2c61ce78);
              FUN_2c6036dc(param_2,*piVar3 + 0x60,_LAB_2c61ce7c);
              FUN_2c6036dc(param_2,*piVar3 + 0xa0,_LAB_2c61ce84);
              iVar5 = *piVar3 + 0xa8;
              uVar6 = _LAB_2c61ce88;
            }
          }
          else {
            FUN_2c6036dc(param_2,*_LAB_2c61ce74 + 0x50,0);
            FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
            FUN_2c6036dc(param_2,*piVar12 + 0x230,4);
            FUN_2c6036dc(param_2,*piVar12 + 0x58,_LAB_2c61ce78);
            FUN_2c6036dc(param_2,*piVar12 + 0x30,_LAB_2c61ce80);
            FUN_2c6036dc(param_2,*piVar12 + 0x238,_LAB_2c61ce80);
            FUN_2c6036dc(param_2,*piVar12 + 0xa0,_LAB_2c61ce84);
            FUN_2c6036dc(param_2,*piVar12 + 0xa8,_LAB_2c61ce88);
            iVar5 = *piVar12 + 0x230;
            uVar6 = _LAB_2c61ce84;
          }
          goto LAB_2c61c88c;
        }
        FUN_2c6036dc(param_2,*_LAB_2c61ce74 + 0x1f8,0);
        FUN_2c6036dc(param_2,*piVar12 + 0x88,0);
        FUN_2c6036dc(param_2,*piVar12 + 0x20,0x50000);
        FUN_2c6036dc(param_2,*piVar12 + 0x58,_LAB_2c61ce78);
        FUN_2c6036dc(param_2,*piVar12 + 0x60,_LAB_2c61ce7c);
        iVar5 = *piVar12 + 0x28;
        uVar6 = _LAB_2c61ce80;
LAB_2c61cbf2:
        FUN_2c6036dc(param_2,iVar5,uVar6);
        FUN_2c6036dc(param_2,*piVar12 + 0x30,_LAB_2c61ce84);
        iVar5 = *piVar12 + 0x40;
        uVar6 = _LAB_2c61ce88;
        goto LAB_2c61c88c;
      }
      iVar5 = FUN_2c606c04(param_2,_LAB_2c61cb50);
      piVar12 = _LAB_2c61ce74;
      if (iVar5 != 0) {
        FUN_2c6036dc(param_2,*_LAB_2c61ce74 + 0x30,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xb0,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
        FUN_2c6036dc(param_2,*piVar12 + 0xa8,8);
        FUN_2c6036dc(param_2,*piVar12 + 0x28,0x20000);
        uVar6 = 0x20000;
        iVar5 = *piVar12 + 0xb0;
        goto LAB_2c61c88c;
      }
      iVar5 = FUN_2c606c04(param_2,_LAB_2c61cb54);
      piVar12 = _LAB_2c61cb1c;
      if (iVar5 != 0) {
        FUN_2c6036dc(param_2,*_LAB_2c61cb1c + 0x30,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xb0,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
        FUN_2c6036dc(param_2,*piVar12 + 0xa8,8);
        FUN_2c6036dc(param_2,*piVar12 + 0x28,0x20000);
        FUN_2c6036dc(param_2,*piVar12 + 0xb0,0x20000);
        FUN_2c6036dc(param_2,*piVar12 + 0xf0,0x30000);
        FUN_2c6036dc(param_2,*piVar12 + 200,_LAB_2c61cb58);
        FUN_2c6036dc(param_2,*piVar12 + 0xd0,0x30000);
        iVar5 = *piVar12 + 0xd8;
        uVar6 = _LAB_2c61cb58;
        goto LAB_2c61c88c;
      }
      iVar5 = FUN_2c606c04(param_2,_LAB_2c61ce90);
      piVar12 = _LAB_2c61ce74;
      if (iVar5 != 0) {
        FUN_2c6036dc(param_2,*_LAB_2c61ce74 + 0x18,0);
        FUN_2c6036dc(param_2,*piVar12 + 0x68,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xb8,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
        FUN_2c6036dc(param_2,*piVar12 + 0xa8,8);
        FUN_2c6036dc(param_2,*piVar12 + 8,0x10000);
        FUN_2c6036dc(param_2,*piVar12 + 0x10,_LAB_2c61ce94);
        FUN_2c6036dc(param_2,*piVar12 + 0x50,0x50000);
        FUN_2c6036dc(param_2,*piVar12 + 0x158,0x50000);
        FUN_2c6036dc(param_2,*piVar12 + 0x80,0x50000);
        FUN_2c6036dc(param_2,*piVar12 + 0x58,_LAB_2c61ce78);
        FUN_2c6036dc(param_2,*piVar12 + 0x28,_LAB_2c61ce84);
        iVar5 = *piVar12 + 0x38;
        uVar6 = _LAB_2c61ce88;
        goto LAB_2c61c88c;
      }
      iVar5 = FUN_2c606c04(param_2,_LAB_2c61ce98);
      piVar12 = _LAB_2c61ce74;
      if (iVar5 != 0) {
        FUN_2c6036dc(param_2,*_LAB_2c61ce74 + 0x88,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
        FUN_2c6036dc(param_2,*piVar12 + 0x60,_LAB_2c61ce9c);
        FUN_2c6036dc(param_2,*piVar12 + 0x138,0x20000);
        FUN_2c6036dc(param_2,*piVar12 + 0x28,_LAB_2c61cea0);
        FUN_2c6036dc(param_2,*piVar12 + 0x140,_LAB_2c61cea0);
        FUN_2c6036dc(param_2,*piVar12 + 0x58,_LAB_2c61cea4);
        FUN_2c6036dc(param_2,*piVar12 + 200,_LAB_2c61cea4);
        FUN_2c6036dc(param_2,*piVar12 + 0xd8,_LAB_2c61cea4);
        uVar6 = 0x20000;
        iVar5 = *piVar12 + 0xd0;
        goto LAB_2c61c88c;
      }
      iVar5 = FUN_2c606c04(param_2,_LAB_2c61d198);
      piVar12 = _LAB_2c61d19c;
      if (iVar5 == 0) {
        iVar5 = FUN_2c606c04(param_2,_LAB_2c61d1ac);
        piVar12 = _LAB_2c61d19c;
        if (iVar5 != 0) {
          FUN_2c6036dc(param_2,*_LAB_2c61d19c + 0x18,0);
          FUN_2c6036dc(param_2,*piVar12 + 0x78,0);
          FUN_2c6036dc(param_2,*piVar12 + 0x128,0);
          FUN_2c6036dc(param_2,*piVar12 + 8,0x10000);
          FUN_2c6036dc(param_2,*piVar12 + 0x10,_LAB_2c61d1b0);
          FUN_2c6036dc(param_2,*piVar12 + 0x110,0x50000);
          FUN_2c6036dc(param_2,*piVar12 + 0x118,0x20000);
          FUN_2c6036dc(param_2,*piVar12 + 0x120,0x60000);
          uVar6 = 0x70000;
          iVar5 = *piVar12 + 0x110;
          goto LAB_2c61c88c;
        }
        iVar5 = FUN_2c606c04(param_2,_LAB_2c61d1b4);
        piVar12 = _LAB_2c61d19c;
        if (iVar5 != 0) {
          FUN_2c6036dc(param_2,*_LAB_2c61d19c + 0x18,0);
          FUN_2c6036dc(param_2,*piVar12 + 0xe0,0);
          FUN_2c6036dc(param_2,*piVar12 + 0x90,0);
          FUN_2c6036dc(param_2,*piVar12 + 0x98,0);
          FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
          FUN_2c6036dc(param_2,*piVar12 + 0xa8,8);
          uVar6 = 0x40000;
          iVar5 = *piVar12 + 0x28;
          goto LAB_2c61c88c;
        }
        iVar5 = FUN_2c606c04(param_2,_LAB_2c61d1b8);
        piVar12 = _LAB_2c61d19c;
        if (iVar5 == 0) {
          iVar5 = FUN_2c606c04(param_2,_LAB_2c61d1bc);
          piVar12 = _LAB_2c61d19c;
          if (iVar5 != 0) {
            FUN_2c6036dc(param_2,*_LAB_2c61d19c + 0x18,0);
            FUN_2c6036dc(param_2,*piVar12 + 0xc0,0);
            FUN_2c6036dc(param_2,*piVar12 + 0x90,0);
            FUN_2c6036dc(param_2,*piVar12 + 0x130,0);
            FUN_2c6036dc(param_2,*piVar12 + 8,0x10000);
            FUN_2c6036dc(param_2,*piVar12 + 0x10,_LAB_2c61d1b0);
            FUN_2c6036dc(param_2,*piVar12 + 0x50,0x40000);
            FUN_2c6036dc(param_2,*piVar12 + 0x28,_LAB_2c61d1c0);
            iVar5 = *piVar12 + 0x58;
            uVar6 = _LAB_2c61d1c4;
            goto LAB_2c61c88c;
          }
          iVar5 = FUN_2c606c04(param_2,_LAB_2c61d1c8);
          if ((iVar5 != 0) || (iVar5 = FUN_2c606c04(param_2,_LAB_2c61d1cc), iVar5 != 0)) {
            piVar12 = _LAB_2c61d19c;
            FUN_2c6036dc(param_2,*_LAB_2c61d19c + 0x100,0);
            FUN_2c6036dc(param_2,*piVar12 + 0x100,0x20000);
            FUN_2c6036dc(param_2,*piVar12 + 0x108,0x20000);
            uVar6 = 0x30000;
            iVar5 = *piVar12 + 0xf0;
            goto LAB_2c61c88c;
          }
          iVar5 = FUN_2c606c04(param_2,_LAB_2c61d4cc);
          piVar12 = _LAB_2c61d4d0;
          if (iVar5 != 0) {
            FUN_2c6036dc(param_2,*_LAB_2c61d4d0 + 0x100,0);
            FUN_2c6036dc(param_2,*piVar12 + 0x100,0x20000);
            uVar6 = 0x20000;
            iVar5 = *piVar12 + 0x108;
            goto LAB_2c61c88c;
          }
          iVar5 = FUN_2c606c04(param_2,_LAB_2c61d4d4);
          piVar12 = _LAB_2c61d4d0;
          if (iVar5 != 0) {
            FUN_2c6036dc(param_2,*_LAB_2c61d4d0 + 0x18,0);
            FUN_2c6036dc(param_2,*piVar12 + 0xb0,0);
            uVar6 = 0x20000;
            iVar5 = *piVar12 + 0x168;
            goto LAB_2c61c88c;
          }
          iVar5 = FUN_2c606c04(param_2,_LAB_2c61d4d8);
          piVar12 = _LAB_2c61d4d0;
          if (iVar5 != 0) {
            FUN_2c6036dc(param_2,*_LAB_2c61d4d0 + 0x18,0);
            FUN_2c6036dc(param_2,*piVar12 + 0x78,0);
            FUN_2c6036dc(param_2,*piVar12 + 0x60,0x80);
            FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
            FUN_2c6036dc(param_2,*piVar12 + 0xa8,8);
            FUN_2c6036dc(param_2,*piVar12 + 8,0x10000);
            FUN_2c6036dc(param_2,*piVar12 + 0x10,_LAB_2c61d4dc);
            FUN_2c6036dc(param_2,*piVar12 + 0x170,_LAB_2c61d4e0);
            uVar6 = 0x80000;
            iVar5 = *piVar12 + 0x178;
            goto LAB_2c61c88c;
          }
          iVar5 = FUN_2c606c04(param_2,_LAB_2c61d4e4);
          if (iVar5 != 0) {
            iVar5 = *_LAB_2c61d4d0 + 0x18;
            piVar12 = _LAB_2c61d4d0;
LAB_2c61d2d8:
            FUN_2c6036dc(param_2,iVar5,0);
            uVar6 = 0;
            iVar5 = *piVar12 + 0x68;
            goto LAB_2c61c88c;
          }
          iVar5 = FUN_2c606c04(param_2,_LAB_2c61d4e8);
          if ((iVar5 != 0) || (iVar5 = FUN_2c606c04(param_2,_LAB_2c61d4ec), iVar5 != 0)) {
            uVar6 = 0;
            iVar5 = *_LAB_2c61d4d0 + 400;
            goto LAB_2c61c88c;
          }
          iVar5 = FUN_2c606c04(param_2,_LAB_2c61d4f0);
          piVar12 = _LAB_2c61d4d0;
          if (iVar5 != 0) {
            FUN_2c6036dc(param_2,*_LAB_2c61d4d0,0);
            if (*_LAB_2c61d4f4 == '\x01') {
              iVar5 = *piVar12 + 0x78;
            }
            else {
              iVar5 = *piVar12 + 0x70;
            }
            FUN_2c6036dc(param_2,iVar5,0);
            FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
            FUN_2c6036dc(param_2,*piVar12 + 0xa8,8);
            FUN_2c6036dc(param_2,*piVar12 + 0x20,0x50000);
            FUN_2c6036dc(param_2,*piVar12 + 0x60,_LAB_2c61d4f8);
            FUN_2c6036dc(param_2,*piVar12 + 0x50,0x50000);
            FUN_2c6036dc(param_2,*piVar12 + 0x208,0x50000);
            FUN_2c6036dc(param_2,*piVar12 + 0x58,_LAB_2c61d4fc);
            iVar5 = *piVar12 + 0x48;
            uVar6 = _LAB_2c61d500;
            goto LAB_2c61cbf2;
          }
          iVar5 = FUN_2c606c04(param_2,_LAB_2c61d504);
          piVar12 = _LAB_2c61d4d0;
          if (iVar5 == 0) {
            iVar5 = FUN_2c606c04(param_2,_LAB_2c61d508);
            piVar12 = _LAB_2c61d4d0;
            if (iVar5 != 0) {
              FUN_2c6036dc(param_2,*_LAB_2c61d4d0 + 0x48,0);
              iVar5 = *piVar12 + 0x220;
              uVar6 = 0;
              goto LAB_2c61c88c;
            }
            iVar5 = FUN_2c606c04(param_2,_LAB_2c61d50c);
            piVar12 = _LAB_2c61d4d0;
            if (iVar5 != 0) {
              FUN_2c6036dc(param_2,*_LAB_2c61d4d0 + 0x50,0);
              FUN_2c6036dc(param_2,*piVar12 + 0x218,0);
              FUN_2c6036dc(param_2,*piVar12 + 0x28,4);
              FUN_2c6036dc(param_2,*piVar12 + 0x220,4);
              FUN_2c6036dc(param_2,*piVar12 + 0x220,0x20);
              uVar6 = 0x20;
              iVar5 = *piVar12 + 0x58;
              goto LAB_2c61c88c;
            }
            iVar5 = FUN_2c606c04(param_2,_LAB_2c61d510);
            piVar12 = _LAB_2c61d4d0;
            if (iVar5 != 0) {
              FUN_2c6036dc(param_2,*_LAB_2c61d4d0 + 0x18,0);
              iVar5 = *piVar12 + 0x1a0;
              uVar6 = 0;
              goto LAB_2c61c88c;
            }
            iVar5 = FUN_2c606c04(param_2,_LAB_2c61d514);
            piVar12 = _LAB_2c61d4d0;
            if (iVar5 == 0) {
              iVar5 = FUN_2c606c04(param_2,_LAB_2c61d518);
              if (iVar5 != 0) {
                iVar5 = *_LAB_2c61d4d0 + 0x1b8;
                piVar12 = _LAB_2c61d4d0;
LAB_2c61ca3a:
                FUN_2c6036dc(param_2,iVar5,0);
                FUN_2c6036dc(param_2,*piVar12 + 8,0x10000);
                iVar5 = *piVar12 + 0x10;
                uVar6 = _LAB_2c61cb20;
                goto LAB_2c61c88c;
              }
              iVar5 = FUN_2c606c04(param_2,_LAB_2c61d740);
              piVar12 = DAT_2c61d744;
              if (iVar5 != 0) {
                FUN_2c6036dc(param_2,*DAT_2c61d744 + 0x1a8,0);
                FUN_2c6036dc(param_2,*piVar12 + 0x1e0,0x20);
                FUN_2c6036dc(param_2,*piVar12 + 0x30,0x21);
                FUN_2c6036dc(param_2,*piVar12 + 0x30,1);
                uVar6 = 4;
                iVar5 = *piVar12 + 0x28;
                goto LAB_2c61c88c;
              }
              iVar5 = FUN_2c606c04(param_2,_LAB_2c61d748);
              if ((iVar5 != 0) || (iVar5 = FUN_2c606c04(param_2,_LAB_2c61d74c), iVar5 != 0)) {
                uVar6 = 0;
                iVar5 = *DAT_2c61d744 + 0x1c8;
                goto LAB_2c61c88c;
              }
              iVar5 = FUN_2c606c04(param_2,_LAB_2c61d750);
              piVar12 = DAT_2c61d744;
              if (iVar5 == 0) {
                iVar5 = FUN_2c606c04(param_2,_LAB_2c61d754);
                if (iVar5 != 0) {
                  iVar5 = *DAT_2c61d744 + 0x1d8;
                  uVar6 = 0;
                  goto LAB_2c61c88c;
                }
                iVar5 = FUN_2c606c04(param_2,_LAB_2c61d758);
                if (iVar5 != 0) {
                  iVar5 = *DAT_2c61d744 + 0x1e8;
                  uVar6 = 0;
                  goto LAB_2c61c88c;
                }
                iVar5 = FUN_2c606c04(param_2,_LAB_2c61d75c);
                piVar12 = DAT_2c61d744;
                if (iVar5 != 0) {
                  FUN_2c6036dc(param_2,*DAT_2c61d744 + 0x18,0);
                  iVar5 = *piVar12 + 0x1f0;
                  uVar6 = 0;
                  goto LAB_2c61c88c;
                }
                iVar5 = FUN_2c606c04(param_2,_LAB_2c61d760);
                if (iVar5 != 0) {
                  iVar5 = *DAT_2c61d744 + 0x200;
                  uVar6 = 0;
                  goto LAB_2c61c88c;
                }
                iVar5 = FUN_2c606c04(param_2,_LAB_2c61d764);
                piVar12 = DAT_2c61d744;
                if (iVar5 != 0) {
                  FUN_2c6036dc(param_2,*DAT_2c61d744 + 0x18,0);
                  FUN_2c6036dc(param_2,*piVar12 + 0x78,0);
                  FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
                  FUN_2c6036dc(param_2,*piVar12 + 0xa8,8);
                  uVar6 = 0x70000;
                  iVar5 = *piVar12 + 0x28;
                  goto LAB_2c61c88c;
                }
                iVar5 = FUN_2c606c04(param_2,_LAB_2c61d768);
                if (iVar5 != 0) {
                  iVar5 = *DAT_2c61d744;
                  piVar12 = DAT_2c61d744;
                  goto LAB_2c61ca3a;
                }
                iVar5 = FUN_2c606c04(param_2,_LAB_2c61d76c);
                if (iVar5 == 0) {
                  iVar5 = FUN_2c606c04(param_2,_LAB_2c61d770);
                  if (iVar5 == 0) {
                    iVar5 = FUN_2c606c04(param_2,_LAB_2c61d774);
                    if (iVar5 == 0) {
                      iVar5 = FUN_2c606c04(param_2,_LAB_2c61d778);
                      piVar12 = DAT_2c61d744;
                      if (iVar5 == 0) {
                        iVar5 = FUN_2c606c04(param_2,_LAB_2c61d77c);
                        if (iVar5 == 0) {
                          return;
                        }
                        iVar5 = *DAT_2c61d744 + 0x240;
                        uVar6 = 0;
                      }
                      else {
                        FUN_2c6036dc(param_2,*DAT_2c61d744 + 0x198,0);
                        FUN_2c6036dc(param_2,*piVar12 + 0x80,0);
                        FUN_2c6036dc(param_2,*piVar12 + 0x50,0x30000);
                        uVar6 = 0x30000;
                        iVar5 = *piVar12 + 0x80;
                      }
                    }
                    else {
                      iVar5 = *DAT_2c61d744 + 0xc0;
                      uVar6 = 0;
                    }
                    goto LAB_2c61c88c;
                  }
                  iVar5 = *DAT_2c61d744;
                  piVar12 = DAT_2c61d744;
                  goto LAB_2c61d2d8;
                }
                iVar5 = *DAT_2c61d744;
                piVar12 = DAT_2c61d744;
              }
              else {
                FUN_2c6036dc(param_2,*DAT_2c61d744 + 0x1c0,0);
                iVar5 = *piVar12;
              }
            }
            else {
              FUN_2c6036dc(param_2,*_LAB_2c61d4d0 + 0x1b0,0);
              iVar5 = *piVar12;
            }
          }
          else {
            FUN_2c6036dc(param_2,*_LAB_2c61d4d0 + 0x18,0);
            FUN_2c6036dc(param_2,*piVar12 + 0x210,0);
            iVar5 = *piVar12;
          }
          goto LAB_2c61c87e;
        }
        FUN_2c6036dc(param_2,*_LAB_2c61d19c + 0x18,0);
        FUN_2c6036dc(param_2,*piVar12 + 0x78,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xd0,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xd8,0x20);
        FUN_2c6036dc(param_2,*piVar12 + 0x58,0x20);
        FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
        uVar6 = 8;
        iVar5 = *piVar12 + 0xa8;
      }
      else {
        FUN_2c6036dc(param_2,*_LAB_2c61d19c + 0x48,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xb0,0);
        FUN_2c6036dc(param_2,*piVar12 + 0xe8,0);
        FUN_2c6036dc(param_2,*piVar12 + 0x60,0x80);
        FUN_2c6036dc(param_2,*piVar12 + 0xa0,4);
        FUN_2c6036dc(param_2,*piVar12 + 0x28,_LAB_2c61d1a0);
        FUN_2c6036dc(param_2,*piVar12 + 0xb0,0x20000);
        FUN_2c6036dc(param_2,*piVar12 + 0x60,_LAB_2c61d1a4);
        FUN_2c6036dc(param_2,*piVar12 + 0xf0,0x30000);
        FUN_2c6036dc(param_2,*piVar12 + 0x50,0x30000);
        FUN_2c6036dc(param_2,*piVar12 + 0x148,0x30000);
        FUN_2c6036dc(param_2,*piVar12 + 0x60,_LAB_2c61d1a8);
        iVar5 = *piVar12 + 0xd8;
        uVar6 = _LAB_2c61d1a0;
      }
      FUN_2c6036dc(param_2,iVar5,uVar6);
      uVar6 = 0x20000;
      iVar5 = *piVar12 + 0xd8;
      goto LAB_2c61c88c;
    }
    uVar6 = FUN_2c6041d4(param_2);
    iVar5 = FUN_2c606c04(uVar6,_LAB_2c61cb10);
    if (iVar5 != 0) {
      return;
    }
    uVar6 = FUN_2c6041d4(uVar6);
    iVar5 = FUN_2c606c04(uVar6,_LAB_2c61cb10);
    if (iVar5 != 0) {
      iVar5 = *_LAB_2c61cb1c + 0x80;
      piVar12 = _LAB_2c61cb1c;
      goto LAB_2c61ca3a;
    }
    iVar5 = FUN_2c604204(param_2);
    if (iVar5 == 0) {
      uVar6 = FUN_2c6041d4(param_2);
      iVar5 = FUN_2c606c04(uVar6,_LAB_2c61cb14);
      piVar12 = _LAB_2c61ce74;
      if (iVar5 != 0) {
        FUN_2c6036dc(param_2,*_LAB_2c61ce74 + 0x48,0);
        iVar5 = *piVar12 + 0x70;
        uVar6 = 0;
        goto LAB_2c61c88c;
      }
    }
    iVar5 = FUN_2c604204(param_2);
    if (iVar5 == 1) {
      uVar6 = FUN_2c6041d4(param_2);
      iVar5 = FUN_2c606c04(uVar6,_LAB_2c61ce8c);
      piVar12 = _LAB_2c61ce74;
      if (iVar5 != 0) {
        FUN_2c6036dc(param_2,*_LAB_2c61ce74,0);
        FUN_2c6036dc(param_2,*piVar12 + 0x80,0);
        iVar5 = *piVar12;
        goto LAB_2c61c87e;
      }
    }
    uVar6 = FUN_2c6041d4(param_2);
    iVar5 = FUN_2c606c04(uVar6,_LAB_2c61cb18);
    piVar12 = _LAB_2c61cb1c;
    if (iVar5 != 0) {
      return;
    }
    FUN_2c6036dc(param_2,*_LAB_2c61cb1c + 0x18,0);
    iVar5 = *piVar12;
  }
LAB_2c61c87e:
  FUN_2c6036dc(param_2,iVar5 + 8,0x10000);
  iVar5 = *piVar12 + 0x10;
  uVar6 = _LAB_2c61cb20;
LAB_2c61c88c:
  FUN_2c6036dc(param_2,iVar5,uVar6);
  return;
}

