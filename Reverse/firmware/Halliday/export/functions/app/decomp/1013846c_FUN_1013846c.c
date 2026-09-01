/* FUN_1013846c @ 0x1013846c */

undefined4 FUN_1013846c(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  FUN_101383f6();
  iVar3 = 0;
  cVar1 = (char)param_1[1];
  pcVar5 = *(char **)(param_2 + 8);
  do {
    if ((int)(uint)*(ushort *)(param_2 + 0xc) <= iVar3) {
LAB_10138456:
      FUN_100c1f58(param_2 + 8);
      if (*(char *)((int)param_1 + 5) == cVar1) {
        uVar2 = 0xffffff97;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 1);
    if (*(byte *)((int)param_1 + 5) == uVar4) goto LAB_10138456;
    iVar3 = iVar3 + 1;
    if (*pcVar5 == '\r') {
      *(undefined1 *)(*param_1 + uVar4) = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)((int)param_1 + 7) = 2;
      goto LAB_10138456;
    }
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
    *(char *)(*param_1 + uVar4) = *pcVar5;
    cVar1 = (char)param_1[1];
    pcVar5 = pcVar5 + 1;
  } while( true );
}

