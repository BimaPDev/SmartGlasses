/* FUN_2c480970 @ 0x2c480970 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c480970(int param_1,undefined4 param_2,int param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *extraout_r1;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  int iVar11;
  undefined8 uVar12;
  undefined1 *apuStack_ac [2];
  undefined1 auStack_a4 [32];
  undefined1 auStack_84 [32];
  uint auStack_64 [16];
  uint uStack_24;
  uint *puVar10;
  
  uStack_24 = *_LAB_2c480a9c;
  iVar11 = (int)param_4[1];
  iVar5 = *(short *)(param_4 + 2) + 7;
  cVar1 = *param_4;
  if (iVar5 < 0) {
    iVar5 = *(short *)(param_4 + 2) + 0xe;
  }
  apuStack_ac[0] = auStack_a4;
  apuStack_ac[1] = auStack_84;
  func_0x2c47f798(auStack_a4,param_2,iVar5 >> 3);
  iVar5 = func_0x2c47f798(auStack_64,param_1,iVar11);
  func_0x2c47f798(iVar5 + cVar1 * 4,param_1 + iVar11);
  iVar5 = FUN_2c47f728(auStack_a4,auStack_a4,auStack_84,param_4);
  puVar8 = (undefined1 *)0x0;
  if (*_LAB_2c480aa0 != 0) {
    puVar8 = apuStack_ac[iVar5];
    uVar12 = FUN_2c47f7f4(puVar8,param_4 + 4,(int)cVar1);
    puVar4 = (uint *)((ulonglong)uVar12 >> 0x20);
    uVar3 = 0;
    if ((int)uVar12 == 0) goto LAB_2c480a7e;
  }
  FUN_2c48029c(auStack_64,auStack_64,apuStack_ac[iVar5 == 0],puVar8,
               (int)(short)(*(short *)(param_4 + 2) + 1),param_4);
  puVar4 = extraout_r1;
  if (0 < iVar11) {
    puVar4 = (uint *)0x0;
    puVar8 = (undefined1 *)(param_3 + -1);
    uVar6 = 0;
    do {
      uVar7 = (iVar11 + -1) - uVar6;
      bVar2 = (char)puVar4 + 1;
      uVar6 = (uint)bVar2;
      puVar4 = (uint *)(int)(char)bVar2;
      puVar8 = puVar8 + 1;
      *puVar8 = (char)(*(uint *)((int)auStack_64 + (uVar7 & 0xfffffffc)) >> ((uVar7 & 3) << 3));
    } while ((int)uVar6 < iVar11);
  }
  if ((char)(*param_4 << 1) < '\x01') {
    uVar3 = 0;
  }
  else {
    uVar6 = 0;
    puVar4 = auStack_64 + ((byte)(*param_4 << 1) - 1 & 0xff) + 1;
    puVar9 = auStack_64;
    do {
      puVar10 = puVar9 + 1;
      uVar6 = uVar6 | *puVar9;
      puVar9 = puVar10;
    } while (puVar4 != puVar10);
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = 1;
    }
  }
LAB_2c480a7e:
  if ((*_LAB_2c480a9c ^ uStack_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar3,puVar4,*_LAB_2c480a9c ^ uStack_24,0);
}

