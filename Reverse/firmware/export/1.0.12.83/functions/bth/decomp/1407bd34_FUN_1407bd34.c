/* FUN_1407bd34 @ 0x1407bd34 */

void FUN_1407bd34(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  int iVar8;
  int extraout_r1;
  undefined2 *puVar9;
  int iVar10;
  char cVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined1 local_28 [4];
  uint local_24;
  
  local_24 = *DAT_1407be88;
  local_28[0] = 0;
  uStack_2e = (undefined2)*(undefined4 *)(DAT_1407be8c + 0x18);
  uStack_2c = (undefined2)((uint)*(undefined4 *)(DAT_1407be8c + 0x18) >> 0x10);
  iVar8 = 0;
  if (param_2 != 0) {
    iVar10 = *(int *)(param_1 + 0x6c);
    bVar2 = *(byte *)(*(int *)(*(int *)(iVar10 + 8) + 2) + 6) &
            *(byte *)(*(int *)(param_2 + 8) + 10);
    uVar4 = (uint)bVar2;
    if ((int)(uVar4 << 0x18) < 0) {
      if ((bVar2 & 8) == 0) {
        uVar12 = 0x80;
      }
      else {
        uVar12 = 0x88;
      }
      *(undefined4 *)(param_1 + 0x14) = DAT_1407be98;
    }
    else {
      iVar8 = uVar4 << 0x1b;
      if (iVar8 < 0) {
        if ((bVar2 & 8) == 0) {
          uVar12 = 0x10;
        }
        else {
          uVar12 = 0x18;
        }
        *(undefined4 *)(param_1 + 0x14) = 48000;
      }
      else {
        if (-1 < (int)(uVar4 << 0x1a)) goto LAB_1407be42;
        if ((bVar2 & 8) == 0) {
          uVar12 = 0x20;
        }
        else {
          uVar12 = 0x28;
        }
        *(undefined4 *)(param_1 + 0x14) = 0xac44;
      }
    }
    iVar8 = DAT_1407be90;
    uVar3 = 0xd;
    *param_4 = 0xd;
    cVar11 = *(char *)(iVar8 + 0x11);
    if (cVar11 == '\0') {
      uVar7 = 0xf;
    }
    else if (*(short *)(param_2 + 4) == 2) {
      uVar3 = 0x11;
      uVar7 = 0x13;
      *param_4 = 0x11;
    }
    else {
      uVar7 = 0xf;
      cVar11 = '\0';
    }
    if ((*(char *)(param_2 + 3) != '\0') && (*(char *)(iVar10 + 0x10) != '\0')) {
      *param_4 = uVar7;
      uVar3 = uVar7;
    }
    uVar13 = FUN_140759b8(uVar3);
    iVar8 = (int)((ulonglong)uVar13 >> 0x20);
    puVar5 = (undefined4 *)uVar13;
    if (puVar5 != (undefined4 *)0x0) {
      *param_3 = puVar5;
      *puVar5 = DAT_1407be94;
      puVar5[1] = CONCAT22(uStack_2e,0xff00);
      puVar5[2] = CONCAT22(0x103,uStack_2c);
      *(undefined1 *)(puVar5 + 3) = uVar12;
      puVar6 = *(undefined1 **)(param_1 + 0x74);
      *puVar6 = 0xff;
      uVar1 = *(undefined1 *)((int)puVar5 + 3);
      puVar6[1] = uVar1;
      local_28[0] = uVar12;
      FUN_140e5278(puVar6 + 2,puVar5 + 1,uVar1,local_28);
      if (cVar11 == '\0') {
        puVar9 = (undefined2 *)((int)puVar5 + 0xd);
      }
      else {
        puVar9 = (undefined2 *)((int)puVar5 + 0x11);
        *(undefined4 *)((int)puVar5 + 0xd) = DAT_1407be9c;
      }
      uVar12 = 0;
      iVar8 = extraout_r1;
      if ((*(char *)(param_2 + 3) != '\0') && (uVar12 = 0, *(char *)(iVar10 + 0x10) != '\0')) {
        uVar12 = 0;
        *puVar9 = 8;
      }
      goto LAB_1407be16;
    }
  }
LAB_1407be42:
  uVar12 = 1;
LAB_1407be16:
  if ((*DAT_1407be88 ^ local_24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar12,iVar8,*DAT_1407be88 ^ local_24,0);
  }
  return;
}

