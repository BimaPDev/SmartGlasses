/* FUN_1007dfa4 @ 0x1007dfa4 */

void FUN_1007dfa4(undefined4 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  iVar3 = *piVar1;
  pcVar2 = *(code **)((int)piVar1 + 0x21);
  if (param_2 == 0) {
    *(uint *)(iVar3 + 0x30) = param_3 | *(uint *)(iVar3 + 0x30) & DAT_1007e050;
    *(uint *)(*piVar1 + 0x24) =
         *(uint *)(*piVar1 + 0x24) & 0xffffffc0 | (uint)*(byte *)((int)piVar1 + 5);
    iVar3 = *piVar1;
    if (pcVar2 == (code *)0x0) {
      *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 9;
      do {
      } while (*(int *)(*piVar1 + 0x1c) << 0x17 < 0);
    }
    else {
      *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x8c;
      *(uint *)(*piVar1 + 0x1c) = *(uint *)(*piVar1 + 0x1c) | 1;
      (*pcVar2)();
      *(uint *)(*(int *)*param_1 + 0x1c) = *(uint *)(*(int *)*param_1 + 0x1c) & 0xfffffffb;
    }
  }
  else {
    *(uint *)(iVar3 + 0x1c) = param_3 | *(uint *)(iVar3 + 0x1c) & DAT_1007e050;
    *(uint *)*piVar1 = *(uint *)*piVar1 | (uint)*(byte *)((int)piVar1 + 5) << 0xf;
    iVar3 = *piVar1;
    if (pcVar2 == (code *)0x0) {
      *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 1;
      do {
      } while (*(int *)(*piVar1 + 0x18) << 0x17 < 0);
    }
    else {
      *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 0x82;
      *(uint *)(*piVar1 + 0x18) = *(uint *)(*piVar1 + 0x18) | 1;
      (*pcVar2)();
      *(uint *)(*(int *)*param_1 + 0x18) = *(uint *)(*(int *)*param_1 + 0x18) & 0xfffffffd;
    }
  }
  return;
}

