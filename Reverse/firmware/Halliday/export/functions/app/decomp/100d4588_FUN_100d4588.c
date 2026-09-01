/* FUN_100d4588 @ 0x100d4588 */

void FUN_100d4588(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)*DAT_100d45f4;
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    if (param_2 == 0) {
      uVar3 = (uint)*(byte *)(piVar2 + 0xe);
LAB_100d459a:
      uVar3 = uVar3 & 1;
    }
    else {
      if (param_2 == 1) {
        uVar3 = (uint)*(byte *)((int)piVar2 + 0x39);
        goto LAB_100d459a;
      }
      if (param_2 == 2) {
        uVar3 = (*(byte *)((int)piVar2 + 0x39) & 7) >> 2;
      }
      else if (param_2 == 3) {
        uVar3 = (*(byte *)((int)piVar2 + 0x39) & 0xf) >> 3;
      }
      else {
        if (param_2 == 4) {
          bVar1 = *(byte *)((int)piVar2 + 0x39) & 0xe0;
        }
        else {
          uVar3 = (uint)*(byte *)((int)piVar2 + 0x3a);
          if (param_2 != 5) goto LAB_100d459a;
          bVar1 = *(byte *)((int)piVar2 + 0x3a) & 0x1c;
        }
        uVar3 = (uint)(bVar1 != 0);
      }
    }
    if ((uVar3 != 0) && (piVar2[3] == param_1)) {
      return;
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}

