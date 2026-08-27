/* FUN_140873d0 @ 0x140873d0 */

int FUN_140873d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  
  iVar5 = DAT_140874b0;
  if ((*(char *)(DAT_140874b0 + 0xc) != '\0') &&
     (iVar2 = FUN_140817fc(*(undefined1 *)(param_1 + 0x52),param_1 + 0x10), iVar2 != 0)) {
    iVar5 = FUN_140872b4(param_1);
    return iVar5;
  }
  uVar6 = *(undefined2 *)(param_1 + 0x1c);
  iVar2 = FUN_1407772c(0x428,0x11,0);
  if (iVar2 != 0) {
    puVar3 = (undefined2 *)FUN_14075458(iVar2,0x11);
    iVar4 = DAT_140874b4;
    *(undefined1 *)(puVar3 + 5) = 0xd;
    *puVar3 = uVar6;
    *(undefined1 *)(puVar3 + 1) = 0x40;
    *(undefined1 *)(puVar3 + 3) = 0x40;
    *(undefined1 *)((int)puVar3 + 3) = 0x1f;
    *(undefined1 *)((int)puVar3 + 7) = 0x1f;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 5) = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 0;
    *(undefined1 *)((int)puVar3 + 0xb) = 0;
    if ((*(byte *)(iVar4 + 0x31) - 7 < 2) &&
       (iVar4 = FUN_140817e4(*(undefined1 *)(param_1 + 0x52),param_1 + 0x10), iVar4 != 0)) {
      uVar6 = 0x43;
    }
    else {
      uVar6 = 0x40;
    }
    puVar3[6] = uVar6;
    *(undefined1 *)(puVar3 + 7) = 2;
    *(undefined1 *)(puVar3 + 8) = 0;
    *(undefined1 *)((int)puVar3 + 0xf) = 7;
    if (*(char *)(param_1 + 0x5f) < '\0') {
      *(undefined1 *)(puVar3 + 8) = 3;
      *(undefined1 *)((int)puVar3 + 0xf) = 0x8f;
      cVar1 = *(char *)(iVar5 + 0x2c);
    }
    else {
      cVar1 = *(char *)(iVar5 + 0x2c);
    }
    if (cVar1 != '\0') {
      *(undefined1 *)(puVar3 + 7) = 0;
      *(undefined1 *)((int)puVar3 + 0xf) = 199;
      *(undefined1 *)(puVar3 + 8) = 3;
    }
    cVar1 = FUN_1407780c(iVar2);
    return (int)cVar1;
  }
  return 1;
}

