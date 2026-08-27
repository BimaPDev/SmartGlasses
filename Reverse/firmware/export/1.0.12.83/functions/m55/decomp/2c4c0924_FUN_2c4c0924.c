/* FUN_2c4c0924 @ 0x2c4c0924 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c0924(void)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar2 = _LAB_2c4c0a70;
  *_LAB_2c4c0a6c = 0;
  uVar3 = FUN_2c673c88();
  puVar6 = _LAB_2c4c0a74;
  if ((*puVar2 & 0xffffff) == 0) goto LAB_2c4c093e;
  iVar4 = func_0x2c674338();
  if ((char)*puVar2 == '\0') {
    if (*(char *)((int)puVar2 + 1) == '\0') {
      if ((*(char *)((int)puVar2 + 2) != '\x01') || (iVar4 != 0)) goto LAB_2c4c09e8;
      *(char *)((int)puVar2 + 2) = '\0';
    }
    else {
      if (uVar3 - puVar2[1] < 0x280) {
LAB_2c4c09e8:
        puVar6 = _LAB_2c4c0a74;
        if ((*puVar2 & 0xffffff) == 0) goto LAB_2c4c093e;
        if (*(char *)((int)puVar2 + 2) == '\0') goto LAB_2c4c09b0;
        cVar1 = *(char *)((int)_LAB_2c4c0a74 + 6);
        goto joined_r0x2c4c09fc;
      }
      *(char *)((int)puVar2 + 1) = '\0';
      *(char *)((int)puVar2 + 2) = '\0';
    }
LAB_2c4c0a32:
    puVar6 = _LAB_2c4c0a74;
    if ((*puVar2 & 0xffffff) == 0) {
LAB_2c4c093e:
      if ((*(byte *)((int)puVar6 + 6) & 0xef) == 0) {
        func_0x2c4c071c(1,0x11);
      }
      func_0x2c4c071c(1,0x14);
      func_0x2c4c2650(*_LAB_2c4c0a78,_LAB_2c4c0a7c,0);
      puVar6[4] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x2c673d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_LAB_2c673d24)(1);
      return;
    }
  }
  else {
    *(char *)((int)puVar2 + 2) = (char)iVar4;
    puVar6 = _LAB_2c4c0a74;
    if (iVar4 == 0) {
      puVar2[1] = uVar3;
      *(undefined2 *)puVar2 = 0x100;
      goto LAB_2c4c0a32;
    }
    *(char *)((int)puVar2 + 1) = '\0';
    bVar7 = 0x4ff < uVar3 - puVar2[1];
    if (bVar7) {
      *(char *)puVar2 = '\0';
    }
    uVar5 = *puVar2;
    if (bVar7) {
      puVar6[2] = uVar3;
    }
    if ((uVar5 & 0xffffff) == 0) goto LAB_2c4c093e;
    cVar1 = *(char *)((int)puVar6 + 6);
joined_r0x2c4c09fc:
    if (cVar1 == '\0') {
      if (0xc7f < uVar3 - puVar6[2]) {
        *(undefined1 *)((int)puVar6 + 6) = 0x10;
        func_0x2c4c071c(1);
      }
    }
    else if (cVar1 == '\x10') {
      if (47999 < uVar3 - puVar6[2]) {
        *(undefined1 *)(puVar6 + 4) = 0;
        *(undefined1 *)((int)puVar6 + 6) = 0x12;
        func_0x2c4c071c(1);
      }
    }
    else if ((cVar1 == '\x12') && (_LAB_2c4c0a90 < uVar3 - puVar6[2])) {
      *(undefined1 *)((int)puVar6 + 6) = 0x13;
      func_0x2c4c071c(1);
    }
  }
LAB_2c4c09b0:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x63e,_LAB_2c4c0a8c,_LAB_2c4c0a88,_LAB_2c4c0a84,_LAB_2c4c0a80);
}

