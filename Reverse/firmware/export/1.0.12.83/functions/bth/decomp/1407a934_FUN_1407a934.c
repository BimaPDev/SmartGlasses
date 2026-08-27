/* FUN_1407a934 @ 0x1407a934 */

undefined4 FUN_1407a934(undefined4 param_1,int param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_1408ad94();
  puVar3 = *(undefined4 **)(param_3 + 0x10);
  if (*(char *)((int)puVar3 + 0x22) != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_1407aa40,uVar1,DAT_1407aa38,*(char *)((int)puVar3 + 0x22));
  }
  if (param_2 == 0) {
    iVar2 = *(int *)(param_3 + 0xc);
    if ((iVar2 == 0) || (*(short *)(iVar2 + 10) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1407aa3c,uVar1,DAT_1407aa38);
    }
    *(short *)((int)puVar3 + 0x1a) = *(short *)(iVar2 + 10);
    *(undefined2 *)(puVar3 + 7) = *(undefined2 *)(iVar2 + 0xc);
    if (*(char *)(puVar3 + 0x14) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_1407aa50,DAT_1407aa4c,*(undefined1 *)((int)puVar3 + 0x37),
                   *(char *)(puVar3 + 0x14),puVar3[0x13]);
    }
    iVar2 = FUN_1408e3f8(puVar3,0x19,1,DAT_1407aa48,DAT_1407aa44);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1407aa54,DAT_1407aa4c);
    }
    puVar3[10] = *puVar3;
    *(undefined2 *)(puVar3 + 0xb) = *(undefined2 *)(puVar3 + 1);
    *(undefined1 *)((int)puVar3 + 0x37) = 1;
    *(undefined1 *)((int)puVar3 + 0x35) = 0;
    puVar3[0x13] = iVar2;
    *(undefined1 *)(puVar3 + 0x14) = 1;
    puVar3[3] = iVar2;
    *(undefined1 *)((int)puVar3 + 0x22) = 3;
  }
  else {
    *(undefined1 *)((int)puVar3 + 0x22) = 1;
    *(char *)(puVar3 + 2) = (char)*param_3;
    (*(code *)puVar3[0x20])(uVar1,puVar3,0xb,param_1);
  }
  return 0;
}

