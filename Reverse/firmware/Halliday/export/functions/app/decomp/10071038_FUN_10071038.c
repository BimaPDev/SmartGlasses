/* FUN_10071038 @ 0x10071038 */

void FUN_10071038(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  uint local_2c [2];
  
  uVar14 = (DAT_10071264 - DAT_10071268) * 0x20 & 0xff00;
  FUN_100a5b78(uVar14 | DAT_1007126c,DAT_10071274,DAT_10071270);
  uVar15 = uVar14 | DAT_100712b0;
  uVar11 = extraout_r1;
  do {
    while( true ) {
      iVar5 = DAT_100712b4;
      FUN_1011401c(DAT_100712b4 + 0x24,uVar11,0xffffffff,0xffffffff);
      puVar2 = DAT_10071280;
      uVar10 = (uint)*DAT_10071278;
      if (uVar10 != 0) {
        *DAT_10071278 = 0;
        uVar3 = FUN_10115464();
        FUN_10115194(uVar3,0xffffffff);
        FUN_10119dc2(DAT_1007127c);
        return;
      }
      cVar9 = *(char *)(DAT_10071280 + 7);
      uVar11 = extraout_r1_00;
      local_2c[0] = uVar10;
      if (*(char *)((int)DAT_10071280 + 0xf) == '\0') break;
LAB_1007114e:
      if (cVar9 == '\x04') {
        do {
          local_2c[0] = 0;
          puVar6 = (undefined1 *)
                   FUN_1011eb60(*(int *)(iVar5 + 0x74) + 0x2ff18000,puVar2[5],local_2c);
          if (puVar6 == (undefined1 *)0x0) {
            FUN_100a5b78(uVar14 | 0x30c0033,DAT_100712a0,DAT_1007129c,puVar2[5],*puVar2,local_2c[0])
            ;
LAB_10071188:
            if (puVar2[5] != 0) {
              if (*(int *)(puVar2 + 2) == 0) {
                uVar11 = uVar14 | DAT_100713a0;
                uVar3 = DAT_100713a8;
                uVar8 = DAT_100713a4;
              }
              else {
                uVar11 = uVar14 | 0x3400031;
                uVar3 = DAT_10071274;
                uVar8 = DAT_100712a4;
              }
              FUN_100a5b78(uVar11,uVar3,uVar8);
              goto LAB_1007134a;
            }
            break;
          }
          if (*(int *)(puVar2 + 2) == 0) {
            switch(*(undefined1 *)(puVar2 + 1)) {
            case 2:
              uVar13 = *(short *)(puVar6 + 2) + 4;
              puVar2[4] = uVar13;
              if ((byte)puVar6[1] >> 4 == 2) {
                if ((local_2c[0] & 0xffff) < 6) {
                  uVar13 = 0x387;
                }
                else {
                  uVar1 = *(ushort *)(puVar6 + 4);
                  uVar16 = uVar1 + 8;
                  if ((0x37f < uVar1) || (uVar16 < uVar13)) {
                    FUN_100a5b78(uVar15,DAT_100712a8,DAT_100712ac,uVar1,uVar13,*puVar6,puVar6[1],
                                 puVar6[2],puVar6[3],(char)*(ushort *)(puVar6 + 4),puVar6[5]);
                  }
                  if (uVar13 < uVar16) {
                    uVar13 = uVar16;
                  }
                }
              }
              goto LAB_1007122a;
            case 3:
              uVar13 = (byte)puVar6[2] + 3;
              break;
            case 4:
              uVar7 = *puVar6;
              uVar13 = (byte)puVar6[1] + 2;
              puVar2[4] = uVar13;
              goto LAB_1007123e;
            case 5:
              uVar13 = *(short *)(puVar6 + 2) + 4;
              break;
            default:
              puVar2[4] = 0;
              FUN_100a5b78(uVar14 | 0x2d80011,DAT_10071384,DAT_10071388);
              goto LAB_100712cc;
            }
            puVar2[4] = uVar13;
LAB_1007122a:
            uVar7 = 0;
LAB_1007123e:
            if ((*(undefined4 **)(iVar5 + 8) != (undefined4 *)0x0) &&
               (pcVar12 = (code *)**(undefined4 **)(iVar5 + 8), pcVar12 != (code *)0x0)) {
              uVar3 = (*pcVar12)(*(undefined1 *)(puVar2 + 1),uVar7,uVar13);
              *(undefined4 *)(puVar2 + 2) = uVar3;
            }
          }
LAB_100712cc:
          if (*(int *)(puVar2 + 2) == 0) {
            FUN_100a5b78(uVar14 | DAT_10071394,DAT_1007139c,DAT_10071398,puVar2[5],local_2c[0]);
          }
          else {
            uVar10 = (uint)(ushort)puVar2[4] - (uint)(ushort)puVar2[6];
            uVar11 = local_2c[0];
            if (uVar10 <= local_2c[0]) {
              uVar11 = uVar10;
            }
            FUN_1011ea40(*(int *)(puVar2 + 2) + (uint)(ushort)puVar2[6],puVar6,uVar11 & 0xffff);
            puVar2[6] = (short)uVar11 + puVar2[6];
          }
          FUN_1011ebda(*(int *)(iVar5 + 0x74) + 0x2ff18000,local_2c[0]);
          uVar13 = puVar2[5];
          puVar2[5] = (short)(uVar13 - local_2c[0]);
          if (local_2c[0] == 0) goto LAB_10071188;
        } while ((uVar13 - local_2c[0] & 0xffff) != 0);
        if ((*(int *)(iVar5 + 8) != 0) && (*(int *)(puVar2 + 2) != 0)) {
          (**(code **)(*(int *)(iVar5 + 8) + 4))(puVar2[4]);
        }
        FUN_1011ea48(DAT_1007138c,0,0x10);
        if (((*(int *)(iVar5 + 0x2c) == 0) && (iVar5 = *(int *)(iVar5 + 0x74), iVar5 != 0)) &&
           (*(short *)(iVar5 + 0x2ff18000) != *(short *)(&DAT_2ff18004 + iVar5))) {
          thunk_FUN_10113fd0(DAT_10071390);
        }
LAB_1007134a:
        FUN_10115218();
        uVar11 = extraout_r1_03;
      }
    }
    uVar11 = (uint)(byte)(4 - cVar9);
    iVar4 = FUN_1011eb60(*(int *)(iVar5 + 0x74) + 0x2ff18000,uVar11,local_2c);
    if (iVar4 != 0) {
      if (uVar11 != local_2c[0]) {
        FUN_100a5b78(uVar14 | DAT_10071294,DAT_10071288,DAT_10071298,uVar11,local_2c[0]);
      }
      uVar11 = local_2c[0];
      FUN_1011ea40((uint)*(byte *)(puVar2 + 7) + (int)puVar2,iVar4,local_2c[0]);
      iVar4 = *(int *)(iVar5 + 0x74);
      *(char *)(puVar2 + 7) = *(char *)(puVar2 + 7) + (char)uVar11;
      FUN_1011ebda(iVar4 + 0x2ff18000,uVar11);
      cVar9 = *(char *)(puVar2 + 7);
      uVar11 = extraout_r1_02;
      if (cVar9 == '\x04') {
        puVar2[5] = *puVar2;
        *(undefined1 *)((int)puVar2 + 0xf) = 1;
      }
      goto LAB_1007114e;
    }
    if (local_2c[0] != 0) {
      FUN_100a5b78(uVar14 | DAT_10071284,DAT_10071288,DAT_1007128c,local_2c[0]);
    }
    iVar5 = *(int *)(iVar5 + 0x74);
    uVar11 = (uint)*(ushort *)(iVar5 + 0x2ff18002);
    if ((uVar11 != *(ushort *)(iVar5 + 0x2ff18000)) ||
       (*(short *)(&DAT_2ff18004 + iVar5) != *(short *)(iVar5 + 0x2ff18006))) {
      FUN_10119dc2(DAT_10071290);
      uVar11 = extraout_r1_01;
    }
  } while( true );
}

