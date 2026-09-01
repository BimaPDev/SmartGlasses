/* FUN_1002660c @ 0x1002660c */

void FUN_1002660c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar7 = *DAT_100266ec;
  iVar9 = *DAT_100266f0;
  if (iVar9 == 0) goto LAB_100266dc;
  uVar10 = thunk_FUN_10115958();
  iVar4 = FUN_10004198((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
  uVar5 = iVar4 - *(int *)(iVar9 + 0x1bc);
  if (uVar5 < 0xe10) goto LAB_100266b4;
  FUN_10097aec(*(undefined4 *)(iVar9 + 0x30),PTR_DAT_100266f4,uVar5 / 0xe10 & 0xffff,
               (uVar5 % 0xe10) / 0x3c,uVar5 % 0x3c);
  do {
    puVar2 = PTR_DAT_100266f8;
    bVar1 = *(byte *)(iVar9 + 0x370);
    iVar4 = *(int *)(PTR_DAT_100266f8 + 0x30);
    uVar5 = (**(code **)(iVar4 + 0xc))();
    if (bVar1 != uVar5) {
      uVar3 = (**(code **)(iVar4 + 0xc))();
      pcVar8 = *(code **)(iVar4 + 0xc);
      *(undefined1 *)(iVar9 + 0x370) = uVar3;
      iVar4 = (*pcVar8)();
      if (iVar4 == 0) {
        FUN_10126eac(*(undefined4 *)(iVar9 + 0x38),iVar9 + 0x98,2);
        iVar4 = iVar9 + 0x8c;
      }
      else {
        FUN_10126eac(*(undefined4 *)(iVar9 + 0x38),iVar9 + 0xc0,2);
        iVar4 = iVar9 + 0xb4;
      }
      FUN_10126eac(*(undefined4 *)(iVar9 + 0x38),iVar4,0);
    }
    iVar4 = (**(code **)puVar2)();
    if (iVar4 == 0) {
LAB_100266dc:
      if (*DAT_100266ec == iVar7) {
        return;
      }
    }
    else {
      uVar6 = FUN_100bcb60();
      if (*DAT_100266ec == iVar7) {
        FUN_10097998(*(undefined4 *)(iVar9 + 0x2c),uVar6);
        return;
      }
    }
    FUN_1013cdc0();
LAB_100266b4:
    FUN_10097aec(*(undefined4 *)(iVar9 + 0x30),PTR_s__02u__02u_100266fc);
  } while( true );
}

