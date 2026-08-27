/* FUN_140667cc @ 0x140667cc */

undefined4 FUN_140667cc(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar3 = DAT_14066820;
  if (*(int **)(DAT_14066820 + 0x84) != (int *)0x0) {
    piVar4 = (int *)0x0;
    piVar6 = *(int **)(DAT_14066820 + 0x84);
    do {
      if (*(ushort *)(piVar6 + 1) == param_2) {
        if (*(byte *)((int)piVar6 + 0xb) != param_1) {
          return 0x43;
        }
        if (piVar4 == (int *)0x0) {
          *(int *)(DAT_14066820 + 0x84) = *piVar6;
        }
        else {
          *piVar4 = *piVar6;
        }
        iVar2 = piVar6[1];
        bVar1 = *(byte *)((int)piVar6 + 6);
        *(undefined1 *)(iVar3 + 0x96) = 0;
        FUN_1405bc78((short)iVar2,(ushort)bVar1 + (short)iVar2 + -1);
        FUN_14074168(piVar6);
        return 0;
      }
      piVar5 = (int *)*piVar6;
      piVar4 = piVar6;
      piVar6 = piVar5;
    } while (piVar5 != (int *)0x0);
  }
  return 1;
}

