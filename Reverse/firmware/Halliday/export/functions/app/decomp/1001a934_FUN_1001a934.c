/* FUN_1001a934 @ 0x1001a934 */

void FUN_1001a934(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  
  uVar5 = DAT_1001aa18;
  iVar4 = DAT_1001aa14;
  iVar9 = *DAT_1001aa10;
  puVar12 = param_1;
LAB_1001a94e:
  if (*(char *)((int)param_1 + 7) != *(char *)(param_1 + 2)) goto LAB_1001a966;
  iVar6 = 0;
  do {
    if (*DAT_1001aa10 == iVar9) {
      return;
    }
    FUN_1013cdc0(iVar6);
LAB_1001a966:
    while( true ) {
      uVar10 = *(byte *)((int)param_1 + 7) & 7;
      uVar3 = *(undefined1 *)(uVar10 * 0x200 + iVar4);
      iVar11 = iVar4 + uVar10 * 0x200;
      iVar6 = param_1[7];
      param_1[7] = 0;
      if (0 < iVar6) {
        FUN_1011dc50(uVar5);
      }
      sVar8 = *(short *)((int)param_1 + uVar10 * 2 + 10);
      *(undefined2 *)(uVar10 * 0x200 + iVar4) = 0xf01d;
      sVar8 = sVar8 + 3;
      *(char *)(iVar11 + 3) = (char)sVar8;
      *(undefined1 *)(iVar11 + 2) = 0x81;
      *(char *)(iVar11 + 4) = (char)((ushort)sVar8 >> 8);
      uVar2 = *(undefined2 *)((int)param_1 + uVar10 * 2 + 10);
      *(undefined1 *)(iVar11 + 5) = uVar3;
      *(undefined2 *)(iVar11 + 6) = uVar2;
      iVar6 = FUN_1001a758(*param_1,iVar11,*(ushort *)((int)param_1 + uVar10 * 2 + 10) + 8,uVar2,
                           puVar12,iVar9,param_3);
      if (iVar6 != 0) break;
      *(undefined2 *)((int)param_1 + uVar10 * 2 + 10) = 0;
      cVar7 = *(char *)((int)param_1 + 7) + '\x01';
      *(char *)((int)param_1 + 7) = cVar7;
      if (*(char *)(param_1 + 2) == cVar7) {
        FUN_1011dbf4(param_1 + 0xf,0xffffffff);
        bVar1 = *(byte *)((int)param_1 + 7);
        if (((uint)bVar1 == (uint)*(byte *)(param_1 + 2)) &&
           (*(short *)((int)param_1 + (bVar1 & 7) * 2 + 10) != 0)) {
          *(byte *)(param_1 + 2) = bVar1 + 1;
        }
        FUN_10113e2c(param_1 + 0xf);
        goto LAB_1001a94e;
      }
    }
  } while( true );
}

