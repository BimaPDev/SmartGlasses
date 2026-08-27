/* FUN_2c46beb8 @ 0x2c46beb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c46beb8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  double dVar6;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  int iStack_1c;
  
  dVar6 = *(double *)(param_1 + 0x18);
  iStack_1c = *_LAB_2c46bfb0;
  if (NAN(dVar6)) {
    iVar5 = 3;
    uStack_9c = _LAB_2c46bfc0;
LAB_2c46bf08:
    puVar2 = (undefined1 *)FUN_2c66b60a(&uStack_9c,0x2c);
    if (puVar2 != (undefined1 *)0x0) goto LAB_2c46bf12;
LAB_2c46bf72:
    puVar2 = (undefined1 *)FUN_2c66b60a(&uStack_9c,0x2e);
    if (puVar2 == (undefined1 *)0x0) goto LAB_2c46bf3a;
  }
  else {
    if (ABS(dVar6) <= dRam2c46bfa8) {
      iVar5 = FUN_2c66b450(&uStack_9c,0x80,_LAB_2c46bfbc,param_4,dVar6);
      goto LAB_2c46bf08;
    }
    if (0.0 < dVar6) {
      iVar5 = 8;
      uStack_9c = *_LAB_2c46bfb4;
      uStack_98 = _LAB_2c46bfb4[1];
      uStack_94 = CONCAT11(uStack_94._1_1_,(char)_LAB_2c46bfb4[2]);
      goto LAB_2c46bf08;
    }
    iVar5 = 9;
    uStack_9c = *_LAB_2c46bfb8;
    uStack_98 = _LAB_2c46bfb8[1];
    uStack_94 = (undefined2)_LAB_2c46bfb8[2];
    puVar2 = (undefined1 *)FUN_2c66b60a(&uStack_9c,0x2c);
    if (puVar2 == (undefined1 *)0x0) goto LAB_2c46bf72;
LAB_2c46bf12:
    *puVar2 = 0x2e;
  }
  if (param_4 << 0x1d < 0) {
    pcVar3 = puVar2 + 1;
    cVar1 = puVar2[1];
    pcVar4 = pcVar3;
    while (cVar1 != '\0') {
      if (cVar1 != '0') {
        pcVar4 = pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    pcVar4[1] = '\0';
    iVar5 = (int)(pcVar4 + 1) - (int)&uStack_9c;
  }
LAB_2c46bf3a:
  FUN_2c46a48c(param_2,&uStack_9c,iVar5);
  if (*_LAB_2c46bfb0 == iStack_1c) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

